<!DOCTYPE html>
<?php
$sql1 = "select * from user where ID = \"" . $_POST["ID"] . "\" and  PW = \"" . $_POST["PW"] . "\";";
$sql2 = "select * from user where Nickname = \"" . $_POST["Nickname"] . "\";";
$sql3 = "insert into user(ID, PW, Nickname) value (\"" . $_POST["ID"] . "\", \"" . $_POST["PW"] . "\", \"" . $_POST["Nickname"] . "\");";
print($_POST["ID"]);

$s = mysqli_connect("127.0.0.1", "root", "q1w2e3", "user");
mysqli_select_db($s, "user");

if($result=mysqli_fetch_array(mysqli_query($s,$sql1)))
  {
    mysqli_close($s);
    session_start();
    $_SESSION["ID"] = $_POST["ID"];
    header("Location: /Home.php");
  }
  else
  {
    mysqli_close($s);
    header("Location: /Login.php?Error=fail");
  }
?>
