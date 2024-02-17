<!-- connect.php -->
<?php
$servername = "localhost";
$username = "aswanth";
$password = "aswanth";
$dbname = "test";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
