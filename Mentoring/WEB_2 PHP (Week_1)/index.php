<?php
require_once('lib/print.php');
require('view/top.php');
?>
    <a href="create.php">create</a>
    <?php if(isset($_GET['id'])) { ?>
      <a href="update.php?id=<?=$_GET['id']?>">update</a>
      <form action="delete_process.php" method="post">
        <input type="hidden" name="id" value="<?=$_GET['id']?>">
        <input type="submit" value="delete">
      </form>
    <?php } ?>
    <h2>
      <?php
      print_title();
      ?>
    </h2>
    <?php
    print_description();
     ?>
<?php
require('view/bottom.php')
?>

<!--

함수를 <!Doctype html> 이전에 선언
반복사용 가능

isset을 통해서 현재 인자가 있는지 없는지 확인, update 가능 여부 검사

삭제여부 추가 검사, 보안을 위해 링크방식이 아닌 버튼 형식으로 구현
hidden으로 값 전송, 표면상으로는 submit만 구현

겹치는 코드는 다른 파일로 추출 모듈화 후, require를 통해서 호출
디렉토리는 로직계열은 lib, 뷰계열은 view

이 때, 중복 호출을 막기 위해 require_once를 사용할 수 있음

-->
