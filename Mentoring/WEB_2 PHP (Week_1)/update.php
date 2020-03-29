<?php
require_once('lib/print.php');
require('view/top.php');
?>
      <?php
      print_list();
      ?>
    </ol>
    <a href="create.php">create</a>
    <?php if(isset($_GET['id'])) { ?>
      <a href="update.php?id=<?=$_GET['id']?>">update</a>
    <?php } ?>
    <h2>
     <form action="update_process.php" method="post">
       <input type="hidden" name="old_title" value="<?=$_GET['id']?>">
       <p>
         <input type="text" name="title" placeholder="Title" value="<?php print_title(); ?>">
       </p>
       <p>
         <textarea name="description" placeholder="Description"><?php print_description(); ?></textarea>
       </p>
       <p>
         <input type="submit">
       </p>
     </form>
 <?php
 require('view/bottom.php')
 ?>

<!--

input의 value 타입은 기본으로 들어가있는 값을 설정함
input의 hidden 타입은 사용자에게 표시하지 않는, 숨긴 변수를 제공함

-->
