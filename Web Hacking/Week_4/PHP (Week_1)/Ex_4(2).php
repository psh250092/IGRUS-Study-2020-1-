<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
    <h1>WEB</h1>
    <ol>
      <li><a href="index.php?id=HTML">HTML</a></li>
      <li><a href="index.php?id=CSS">CSS</a></li>
      <li><a href="index.php?id=JavaScrit">JavaScript</a></li>
    </ol>
    <h2>
      <?php
        echo $_GET['id'];
      ?>
    </h2>
    Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
  </body>
</html>

<!--

$_GET['id']라는 태그를 이용하여 URI 파라미터로 전달된 변수를 사용할 수 있음
URI 뒤의 =? 뒤로 오는 것은 변수를 의미 (사실 Get방식으로 전달해주는 변수 언제쯤 나오려나.)

-->
