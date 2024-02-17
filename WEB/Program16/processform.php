<!-- processform.php -->
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST["name"];
    $email = $_POST["email"];
    echo "<h2>Form Data:</h2>";
    echo "<p>Name: $name</p>";
    echo "<p>Email: $email</p>";
} else {
    header("Location: form.php");
    exit();
}
