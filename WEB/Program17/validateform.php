<!-- processform.php -->
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $name = trim($_POST["name"]);
    if (empty($name)) {
        $nameErr = "Name is required";
    } 
    $email = trim($_POST["email"]);
    if (empty($email)) {
        $emailErr = "Email is required";
    } 
    if (empty($nameErr) && empty($emailErr)) {
        echo "<h2>Form Data:</h2>";
        echo "<p>Name: $name</p>";
        echo "<p>Email: $email</p>";
    } else {
        include 'form.php';
    }
} else {
    header("Location: form.php");
    exit();
}
?>
