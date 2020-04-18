<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
    <h1><a href="index.php">WEB</a></h1>
    <ol>
      <?php
        $list = scandir('data');
        $i = 0;
        while($i < count($list))
        {
        if($list[$i] != '.')
          {
            if($list[$i] != '..')
            {
              ?>
              <li><a href = "index.php?id=<?=list[$i]?>"><?=$list[$i]?></a></li>
              <?php
            }
          }
          $i = $i + 1;
        }
      ?>
      <li><a href="index.php?id=HTML">HTML</a></li>
      <li><a href="index.php?id=CSS">CSS</a></li>
      <li><a href="index.php?id=JavaScript">JavaScript</a></li>
    </ol>
    <h2>
      <?php
      if(isset($_GET['id'])){
        echo $_GET['id'];
      } else {
        echo "Welcome";
      }
      ?>
    </h2>
    <?php
    if(isset($_GET['id'])){
      echo file_get_contents("data/".$_GET['id']);
    } else {
      echo "Hello, PHP";
    }
     ?>
  </body>
</html>

<!--

while문을 이용해서 디렉터리 스캔&표시
if문을 이용하여 상위 디렉터리 표시X

while안이 참이면 밑의 statmment가 반복됨

무한루프 => expression이 항상 true이어서 무한히 반복됨

-->
