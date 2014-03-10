
<?php

switch($action) {

  case 'start':
?>

<h2>Start Game</h2>

<ul>
  <li>Create a new entry in the save game database</li>
  <li>Go to Character Creation screen</li>
</ul>

<ul class="button-menu">
  <li><a href="/" class="button auto">Character Creation Screen</a></li>
  <li><a href="/" class="button">Quit Game</a></li>
</ul>

<?php
  break;
  case 'start/load':
?>

<h2>Load Game</h2>
<ul class="button-menu">
  <li><a href="/" class="button">Cancel Load</a></li>
</ul>

<?php
  break;
  case 'start/about':
?>

<h2>About Game</h2>
<ul class="button-menu">
  <li><a href="/" class="button">Return to Start Menu</a></li>
</ul>

<?php
  break;
  default:
?>

<ul class="button-menu">
  <li><a href="?action=start" class="button">Start New Game</a></li>
  <li><a href="?action=start/load" class="button">Load Game</a></li>
  <li><a href="?action=start/about" class="button">About</a></li>
</ul>

<?php
  break;

}

?>
