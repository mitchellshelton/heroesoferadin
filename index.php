<?php

  if ($_SERVER['SERVER_NAME'] != 'heroesoferadin.com') {
    error_reporting(E_NOTICE);
    ini_set("display_errors", 1);
  }

?>
<!DOCTYPE html>
<html lang="en">
<head>
  <title>Heroes of Eradin</title>

  <meta http-equiv="content-type" content="text/html; charset=UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />

  <!-- CSS -->
  <link rel="stylesheet" href="/css/normalize.css" type="text/css" media="screen">
  <link rel="stylesheet" href="/css/formalize.css" type="text/css" media="screen">
  <link rel="stylesheet" href="/css/mobile.css" type="text/css" media="screen">
  <link rel="stylesheet" href="/css/styles.css" type="text/css" media="screen">
  <!--[if IE 7]>
    <link rel="stylesheet" href="/css/ie.css" type="text/css" media="screen" />
  <![endif]-->

</head>
<body>

<header id="header">
  <h1>Heroes of Eradin</h1>
</header>

<section id="section">
  <div id="container">
    <?php include('include/main.php'); ?>
  </div>
</section>

<footer id="footer">
  <hr />
  &copy; <?php print date('Y'); ?> Mitchell R.K. Shelton
</footer>


<!-- Javascript -->
<!--[if IE]>
  <script type="text/javascript" charset="utf-8" src="/js/html5shiv.js"></script>
  <script type="text/javascript" charset="utf-8" src="/js/html5shiv-printshiv.js"></script>
<![endif]-->
<script type="text/javascript" charset="utf-8" src="/js/jquery-1.10.2.min.js"></script>
<script type="text/javascript" charset="utf-8" src="/js/jquery.formalize.min.js"></script>
<script type="text/javascript" charset="utf-8" src="/js/script.js"></script>

</body>
</html>