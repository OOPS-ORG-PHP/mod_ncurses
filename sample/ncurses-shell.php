<?php
/**
 * reference: https://raw.githubusercontent.com/jean-pasqualini/ia/master/test5.php
 * fixed PHP >= 8
 *
 * This example shows how to create a basic shell using Ncurses in PHP
 * CLICK ON THE SCREEN FIRST TO BE ABLE TO TYPE
 * Supported features:
 *
 * - Editing the line (backspace, delete, arrows)
 * - History (up/down)
 * - Running commands (enter)
 */

define('NCURSES_KEY_RETURN', 13);
define('NCURSES_KEY_ESCAPE', 27);

error_reporting (E_ALL && ~E_DEPRECATED && ~E_NOTICE);

class Shell {
	private $history = array();
	private $historyScrollback = -1;
	private $window;
	private $prompt = '';
	private $outputLine = 0;
	private $commands = array();

	public function __construct($prompt) {
		ncurses_init();

		// Create a full-screen window
		$this->window = ncurses_newwin(0, 0, 0, 0);
		$this->prompt = $prompt;

		// Disable echoing the characters without our control
		ncurses_noecho();

		$this->drawPrompt();
	}

	public function __destruct() {
		ncurses_end();
	}

	public function getWindowSize() {
		static $stored = null;

		// Get the window size only once
		// We're avoiding problems with resizing windows
		if($stored == null) {
			ncurses_wrefresh($this->window);
			ncurses_getmaxyx($this->window, $y, $x);
			$stored = array($x, $y);
		}

		return $stored;
	}

	private function drawPrompt($input = null) {		
		$windowSize = $this->getWindowSize();

		// Move to the last line
		ncurses_curs_set(2);
		ncurses_move($windowSize[1] - 1, 0);

		// Clear the line
		ncurses_clrtoeol();

		// Write the prompt
		ncurses_addstr($this->prompt);

		$this->input = $input;

		// Reset cursor position		
		ncurses_move($windowSize[1] - 1, strlen($this->prompt));

		if($this->input == null) {
			// Clear the rest of the line
			for($i = 0; $i < $windowSize[0] - strlen($this->prompt); $i++)
				ncurses_addstr(' ');

			// Reset the cursor again
			ncurses_move($windowSize[1] - 1, strlen($this->prompt));
		} else {
			 ncurses_addstr($this->input);
		}
	}

	private function checkCursorBounds() {
		$windowSize = $this->getWindowSize();

		// Get cursor position
		ncurses_getyx(STDSCR, $cury, $curx);

		// Do not allow to overwrite the prompt
		if($curx < strlen($this->prompt)) {
			ncurses_move($windowSize[1] - 1, strlen($this->prompt));
		}
	}

	public function registerCommand($command, $handler) {
		$this->commands[$command] = $handler;
	}

	public function getInput() {
		$windowSize = $this->getWindowSize();

		ncurses_move($windowSize[1] - 1, strlen($this->prompt));
		ncurses_instr($buffer);

		return trim($buffer);
	}

	public function addOutput($text) {
		// Store current cursor position
		ncurses_getyx(STDSCR, $cury, $curx);

		// Move the cursor to a given line
		ncurses_move($this->outputLine, 0);

		// Output text
		ncurses_addstr($text);

		// Move to the next line
		$this->outputLine++;

		// Return to the previous position
		ncurses_move($cury, $curx);
	}

	public function handleKey() {
		ncurses_getyx(STDSCR, $cury, $curx);

		// Read one character
		$c = ncurses_getch();

		if($c == NCURSES_KEY_RETURN) {
			$in = trim($this->getInput());

			// Split input to command and arguments
			$command = explode(' ', $in, 2);
			$command[0] = strtolower($command[0]);

			// Empty command - user just pressed enter
			if(strlen($command[0]) == 0)
				return;

			// Command has been given, so:
			// Add to history, clear the prompt, disable scrollback
			array_push($this->history, $in);
			$this->drawPrompt();
			$this->historyScrollback = -1;

			// Add to output so we can see what we are doing
			$this->addOutput('> ' . $in);

			// Command not found
			if(!array_key_exists($command[0], $this->commands)) {
				$this->addOutput('Unknown command: ' . $command[0]);
				return;
			}

			// Run the command
			$this->commands[$command[0]]($this, $command[1]);

		} else if($c == NCURSES_KEY_LEFT) {
			// Move the cursor left
			ncurses_move($cury, $curx - 1);
		} else if($c == NCURSES_KEY_RIGHT) {
			// Move the cursor right
			ncurses_move($cury, $curx + 1);
		} else if($c == NCURSES_KEY_UP) {
			// If the user is not browsing history, start with the last element + 1
			if($this->historyScrollback == -1) {
				// There is no history - we can't open it
				if(count($this->history) == 0)
					return;

				$this->historyScrollback = count($this->history);
			}

			// Move to a previous element
			$this->historyScrollback--;

			// The user scrolled beyond the list - move to the first item
			if($this->historyScrollback < 0)
				$this->historyScrollback = 0;

			$this->drawPrompt($this->history[$this->historyScrollback]);
		} else if($c == NCURSES_KEY_DOWN) {
			// User is not browsing the history - we can't go lower
			if($this->historyScrollback == -1)
				return;

			$this->historyScrollback++;

			// Disable scrollback when the user went outside the list
			if ($this->historyScrollback >= count($this->history)) {
				$this->historyScrollback = -1;
				$this->drawPrompt();
				return;
			}

			$this->drawPrompt($this->history[$this->historyScrollback]);
		} else if($c == NCURSES_KEY_BACKSPACE) {
			// Remove one character to the left of the cursor
			ncurses_mvdelch($cury, $curx - 1);
		} else if($c == NCURSES_KEY_DC) {
			// Remove one character at the cursor
			ncurses_delch($c);
		} else if (ctype_print($c)) {
			// Just print out an ordinary character
			ncurses_insch($c);
			ncurses_move($cury, $curx + 1);
		}

		$this->checkCursorBounds();
		ncurses_refresh();
	}
}

function quitCommand($shell, $args) {
	exit();
}

function echoCommand($shell, $args) {
	$shell->addOutput($args);
}

function capsCommand($shell, $args) {
	$shell->addOutput(strtoupper($args));
}

$shell = new Shell(' > ');

$shell->registerCommand('quit', "quitCommand");
$shell->registerCommand('echo', "echoCommand");
$shell->registerCommand('caps', "capsCommand");

$shell->addOutput('Available command: echo, caps, quit');
$shell->addOutput('Move your cursor using arrows');
$shell->addOutput('Try it out by typing:');
$shell->addOutput('echo Hello world');
$shell->addOutput('');

while (true) {
	$shell->handleKey();
}


