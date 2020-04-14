<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>Login</title>
  </head>
  <body>
    <?php
    if(isset($_GET['Result']))
    {
      if(strcmp($_GET['Result'], "Error") == false)
      {
        print("Error has occured :ID or Nickname is already exist<br>");
      }
      else if(strcmp($_GET['Result'], "Logout") == false)
      {
        print("Logout success");
      }
      else
      {
        print("Unexpected Error");
      }
    }
    ?>
    <p><h1>Login</h1></p>

    <form action="Login_Process.php" method="post">
      <table>
        <tr>
          <td><input type="text" name="ID"></td>
        </tr>
        <tr>
          <td><input type="password" name="PW"></td>
        </tr>
        <tr>
          <td><input type="submit"></td>
        </tr>
      </table>
    </form>
    <a href="Create.php">Create</a>
  </body>
</html>
