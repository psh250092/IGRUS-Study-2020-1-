<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Function</title>
  </head>
  <body>
    <h1>Function</h1>
    <?php
    function basic(){
        print("Lorem ipsum dolor1<br>");
        print("Lorem ipsum dolor2<br>");
    }
    basic();
    basic();
    basic();

    function sum($left, $right){
      print($left+$right);
      print("<br>");
    }
    sum(2,4);
    sum(4,6);

    function sum2($left, $right){
      return $left+$right;
    }
    print(sum2(2,4));
    file_put_contents('result.txt', sum2(2,4));
    // email('egoing@egoing.net', sum2(2,4));
    // upload('egoing.net', sum2(2,4));
    ?>
  </body>
</html>

<!--

funcion 함수 이름(){실행할 코드}
를 통해서 사용자 지정 코드 사용 가능

-->
