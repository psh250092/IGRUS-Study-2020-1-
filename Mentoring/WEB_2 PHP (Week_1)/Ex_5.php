<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>function</title>
  </head>
  <body>
    <h1>function</h1>
    <?php
    $str = "Lorem ipsum dolor sit amet, consectetur adipisicing elit.


    sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    echo $str;
     ?>
     <h2>strlen()</h2>
     <?php
     echo strlen($str);
      ?>
      <h2>nl2br</h2>
      <?php
     echo nl2br($str);
       ?>
  </body>
</html>

<!--

strlen 함수 : built-in 함수, 문자열 길이 반환
nl2br 함수 : 문자열 내의 줄바꿈을 <br>태그로 변환해줌

-->
