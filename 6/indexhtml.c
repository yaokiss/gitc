<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=i0.5, initial-scale=0.5">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
       a = :<br>
       <input type="text" name="a" />
       <br>

     <input type="radio" name="oper" value="0">+
     <input type="radio" name="oper" value="1">-
     <input type="radio" name="oper" value="2">*
     <input type="radio" name="oper" value="3">/
     <br>
        b = :<br>
       <input type="text" name="b" />

      <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>

//sudo cp index.html /var/www/html/
