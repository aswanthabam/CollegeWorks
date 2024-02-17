<!-- form.html -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Entry Form</title>
</head>
<body>
    <h1>Data Entry Form</h1>
    <form method="post" action="processform.php">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required> <br><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required> <br><br>
        <button type="submit">Submit</button>
    </form>
</body>
</html>
