<!-- form.php -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Validation Using PHP</title>
</head>
<body>
    <h1>Simple Form</h1>
    <form method="post" action="validateform.php">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name">
        <span style="color: red;"><?php if(isset($nameErr)) { echo $nameErr; } ?></span> <br> <br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
        <span style="color: red;"><?php if(isset($emailErr)) { echo $emailErr; } ?></span> <br> <br>
        <button type="submit">Submit</button>
    </form>
</body>
</html>
