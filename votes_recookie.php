<?php



if (isset($_COOKIE["votingstep"])) {

	setcookie("votingstep","1",time()+1);

}



?>



<html>

<head>

<title>REVOTES</title>

<basefont size="2" face="Verdana">

</head>

<body bgcolor="#000000" text="#FFFFFF" link="#FFFFFF" vlink="#FFFFFF">

<center>

<br>

<h1>Cookie Reset Page</h1>

<br>

<br>

<table border=0 width=400 bgcolor=#FFFFFF>

	<tr>

    	<td><font size=2 color=#000000>

        	<strong>Reset the Cookie!</strong>

        </td>

    </tr>

    <tr>

        <td bgcolor="#000000">

            <font size="2" color="#FFFFFF">

            <br>

            <blockquote>

			This page resets your cookie if your vote is blocked so you can vote again.

            </blockquote></td>

    </tr>

    <tr>

        <td bgcolor="#000000">

            <font size="2" color="#FFFFFF">

     		<blockquote><br>

          	<a href="index.php">Back</a>

          	</blockquote>

        </td>

    </tr>

</table>

</center>







</body>

</html>
