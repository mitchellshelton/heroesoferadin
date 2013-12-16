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

  /*
   * Starting and loading a game
   */

  // View the Start Screen
  // Start game
  // View the about screen
  // Back to start screen
  // Start a new game
  // View the new character screen
  // Select a gender
  // Select a class
  // Select an Elemental Specialization
  // Name the new character
  // Save the character
  // Game starts (same action as below)
  // View the Inn Screen
  // Quit the game
  // View the Start Screen
  // Load a game
  // View the Load Screen
  // Select the newly created character
  // Game starts (same as above)
  // View the Inn Screen

  /*
   * Using the Inn Screen
   */

  // View Store Screen
  // Select an item and view the buy price and stats (compared to an equipped item if valid)
  // Buy an item
  // Select an item and view the sell price and stats
  // Sell the item
  // Character currency changes as items are bought or sold
  // Items are added and removed from the inventory as items are bought or sold
  // Exit the Store Screen
  // View the Inn Screen
  // View Inventory Screen
  // Select an item in the inventory
  // Inspect the selected inventory item
  // A notice appears on an item if it is currently equipped by the character
  // Use the selected inventory item on a target item that it can be combined with
  // Use the selected inventory item on a target with no results
  // Use the selected inventory item (consume)
  // Items are added or removed from the inventory as items are used or combined
  // Exit the Inventory Screen
  // View the Inn Screen
  // View Equipment Screen
  // Select an equipment slot
  // Select a listed valid piece of equipment and view its stats (compare if an item is already in slot)
  // Equip an item in an empty slot
  // Swap an item with an already filled slot
  // Character stats change as equipment is added or removed

  /*
   * Combat
   */

  // Choose to Fight the monster
  // Use a Fire Attack
  // Check to see if monster is hit
  // Reduce monster hit points if it is hit
  // Remove one Fire Energy point from character
  // Be attacked by a Fire Attack
  // Check to see if character is hit
  // Reduce character hit points if they are hit
  // Remove one Fire Energy Point from monster
  // Use a Water Attack
  // Check to see if monster is hit
  // Reduce monster hit points if it is hit
  // Remove one Water Energy point from character
  // Be attacked by a Water Attack
  // Check to see if character is hit
  // Reduce character hit points if they are hit
  // Remove one Water Energy Point from monster
  // Use an Air Attack
  // Check to see if monster is hit
  // Reduce monster hit points if it is hit
  // Remove one Air Energy point from character
  // Be attacked by an Air Attack
  // Check to see if character is hit
  // Reduce character hit points if they are hit
  // Remove one Air Energy Point from monster
  // Use a Earth Attack
  // Check to see if monster is hit
  // Reduce monster hit points if it is hit
  // Remove one Earth Energy point from character
  // Be attacked by a Earth Attack
  // Check to see if character is hit
  // Reduce character hit points if they are hit
  // Remove one Earth Energy Point from monster
  // Get burned by a Fire Attack
  // Burn a monster with a Fire Attack
  // Use an antidote to heal a burned condition
  // Get Frozen by a Water Attack
  // Freeze a monster with a Water Attack
  // Use an antidote to heal a frozen condition
  // Get poisoned by a Air Attack
  // Poison a monster with a Air Attack
  // Use an antidote to heal a poisoned condition
  // Get paralyzed by a Earth Attack
  // Paralyze a monster with a Earth Attack
  // Use an antidote to heal a paralyzed condition
  // Use a potion to restore hit points
  // Flee the fight

  // * Notes about attacks: Adjustments need to be made for classes and elemental specializations. This includes amount of damage done, taken, and resisted along with dodge chance changes and chance to hit changes. These adjustments apply to both characters and monsters.

  // Close the terminal
  $term->close();

}

?>