<?php
rename('data/'.$_POST['old_title'], 'data/'.$_POST['title']);
file_put_contents('data/'.$_POST['title'], $_POST['description']);
header('Location: /index.php?id='.$_POST['title']);
?>

<!--

rename을 통해서 파일명을 바꿈
file_put_contents을 통해서 컨텐츠를 생산
header를 통해서 index.php로 이동

-->
