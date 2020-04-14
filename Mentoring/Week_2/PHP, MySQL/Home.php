<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Home</title>
  </head>
  <body>
    <?php session_start(); ?>
    Hello, <?=$_SESSION["ID"]?>!
    <form action="Logout.php" method="post">
      <input type="submit">
    </form>
  </body>
</html>
