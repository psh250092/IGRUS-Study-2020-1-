<?php
file_put_contents('data/'.$_POST['title'], $_POST['description']);
header('Location: /index.php?id='.$_POST['title']);
?>

<!--

file_put_contents을 통해서 컨텐츠를 생산
header를 통해서 index.php로 이동

-->
