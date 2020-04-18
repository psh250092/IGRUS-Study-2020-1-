<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
  </head>
  <body>
    <h1>Conditional</h1>
    <h2>if</h2>
    <?php
    echo '1<br>';
    if(false) {
      echo '2-1<br>';
    } else {
      echo '2-2<br>';
    }
    echo '3<br>';
    ?>
  </body>
</html>

<!--

if문을 이용해 분기
안의 내용이 true이면 중괄호 안의 내용이 실행
안의 내용이 false이면 중괄호 안의 내용이 실행되지 않음

else문 : if문이 false 대신 실행

-->
