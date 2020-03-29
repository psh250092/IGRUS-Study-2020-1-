<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Array</title>
  </head>
  <body>
    <h1>Array</h1>
    <?php
    $coworkers = array('egoing', 'leezche', 'duru', 'taeho');
    echo $coworkers[1].'<br>';
    echo $coworkers[3].'<br>';
    var_dump(count($coworkers));
    array_push($coworkers, 'graphittie');
    var_dump($coworkers);
    ?>
  </body>
</html>

<!--

배열
C++의 Array이나 Python의 List와 비슷함
Val_List = array('Val1', Val2', 'Val3', 'Val4');
Val_list[i] 형식으로 접근, 0부터 시작

count() : 배열의 갯수를 세어줌
array_push() : 배열에 값을 추가함
print_r() : 배열울 출력해주는 함수
-->
