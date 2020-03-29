<?php
unlink('data/'.$_POST['id']);
header('Location: /index.php');
?>

<!--

unlink를 통해서 파일을 삭제
header를 통해서 index.php로 이동

-->
