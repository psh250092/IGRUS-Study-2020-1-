<!DOCTYPE html>
<?php
    $sql1 = "select * from user where ID = \"" . $_POST["ID"] . "\"";
    $sql2 = "select * from user where Nickname = \"" . $_POST["Nickname"] . "\";";
    $sql3 = "insert into user(ID, PW, Nickname) value (\"" . $_POST["ID"] . "\", \"" . $_POST["PW"] . "\", \"" . $_POST["Nickname"] . "\");";
    print($_POST["ID"]);

    $s = mysqli_connect("127.0.0.1", "root", "q1w2e3", "user");
    mysqli_select_db($s, "user");

    $result = mysqli_query($s, $sql3);

    if($result === false)
      {
        mysqli_close($s);
        header("Location: /Login.php?Result=Error");
      }
      else
      {
        mysqli_close($s);
        header("Location: /Login.php");
      }
    //$_SESSION["ID"] = $_POST["ID"];
    //  header('Location: /index.php?id='.$_POST['title']);
?>


INSERT INTO `User` (`ID`, `PW`, `Nickname`) VALUES ('', '', '')
$info1=mysqli_fetch_array($result)
