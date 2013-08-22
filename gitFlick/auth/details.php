<!DOCTYPE html>
<head>
	<title>
		Blog It User Directory - Account Profiles
	</title>
</head>
<body>
	<h1>Account Profile</h1>

<?php

require_once "db.php";

$dsn = "mysql:host:127.0.0.1;port=8889;dbname=bdf1307";
$db_user = 'root';
$db_pass = 'root';
db = new \PDO($dsn, $db_user, $db_pass);

$statement = $db->prepare("SELECT * FROM users where userid = :passedid")

if ($statement->execute(array('passedid'=>$_GET['userid']))){
	
	$rows = $statement->fetchAll();
	
	foreach($rows as $row){
		
		echo ("<strong>User Id:</strong>" . $row['user_id']."<br /> \n");
		echo ("<strong>First Name:</strong>" . $row['firstname']."<br /> \n");
		echo ("<strong>Last Name:</strong>" . $row['lastname']."<br /> \n");
		
		
		echo "<a href=readuser.php?>Back to previous page</a><br>";
	}
}
?>

</body>
</html>