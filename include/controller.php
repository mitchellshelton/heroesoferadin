<?php

function get_action() {
  if (!isset($_GET['action'])) {
    $action = '';
  }
  else {
    $action = $_GET['action'];
  }
  return $action;
}

function controller($action = '') {

  switch($action) {
    case 'start':
      include('start.php');
    break;
    case 'start/load':
      include('start.php');
    break;
    case 'start/about':
      include('start.php');
    break;
    default:
      include('start.php');
    break;
  }

}

?>