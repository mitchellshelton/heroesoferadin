<?php

// Display errors if we are in development
if ($_SERVER['SERVER_NAME'] != 'heroesoferadin.com') {
  error_reporting(E_NOTICE);
  ini_set("display_errors", 1);
}

// Include all classes
include('classes/Vterm.class');
include('classes/Game.class');

// Run the game
function main() {

  // Open the terminal
  $term = new Vterm();
  $term->open();

  // Run Actions

  // Not a real action, just display the task
  $term->log('Player Action - Start Game');
  $game = new Game();
  $term->log('Game Started');

  // Close the terminal
  $term->close();

}

?>