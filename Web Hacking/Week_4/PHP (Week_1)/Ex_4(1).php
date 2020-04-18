<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
  </head>
  <body>
    안녕하세요. <?php echo $_GET['address']; ?>에 사시는 <?php echo $_GET['name']; ?>님
  </body>
</html>

<!--

$_GET['id']라는 태그를 이용하여 URI 파라미터로 전달된 변수를 사용할 수 있음
뒤의 []는 배열을 의미

-->
