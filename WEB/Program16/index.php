<!-- form.php -->
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Form Processing Using PHP</title>
</head>
<body>
    <h1>Simple Form</h1>
    <form method="post" action="processform.php">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required> <br><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required> <br><br>
        <button type="submit">Submit</button>
    </form>
</body>
</html>
