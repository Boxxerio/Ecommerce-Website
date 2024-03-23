<?php
    $insert = false;
if(isset($_POST['name'])){
  
   
    $server = "localhost";
    $username = "root";
    $password = "";


    $con = mysqli_connect($server, $username, $password);


    if(!$con){
        die("connection to this database failed due to" . mysqli_connect_error());
    }
 
    $name = $_POST['name'];
    $email = $_POST['email'];
    $class = $_POST['class'];
    $sql = "INSERT INTO `reg`.`reg` (`name`, `email`,`class` ) VALUES ('$name', '$email', '$class');";
 

    if($con->query($sql)== true){
        $insert = true;
    }
    else{
        echo "ERROR: $sql <br> $con->error";

    }
    $con->close();
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title> Website</title>
    <link rel="stylesheet" href="style2.css">
</head>
<body>
    <header>
        <nav>
            <ul>
                <h4 id="muj">MANIPAL UNIVERSITY JAIPUR</h4>
                <li><a href="#">Page</a></li>
                <li><a href="#">About Me</a></li>

            </ul>
            <img id="logo"  src="logo.jpeg" alt="logo">
        </nav>
    </header>
    <div class="reg">
     <div class="stext"> 

         <?php
        if($insert == true){
        echo "<p class='submit'>Thanks.</p>";
        }
        ?> 

    <section id="text">
    <h1>I am Aditya Sharma</h1>
</section>
    </div>

    <section class="registration">
        <h2>FORM</h2>
        <form id="form1">
            <label for="name">Name:</label>
            <input type="text" id="name" name="name"><br><br>
            
            <label for="email">Email:</label>
            <input type="email" id="email" name="email"><br><br>
            
            <label for="location">Class:</label>
            <input type="text" id="class" name="class"><br><br>
            
            <button type="submit">Submit</button>
        </form>
    </section>
        </div>
    <footer>
        <nav>
            <ul>
                <li><a href="#">Linkedin</a></li>
                <li><a href="#">Github</a></li> 
            </ul>
        </nav>
    </footer>
    
</body>
</html>