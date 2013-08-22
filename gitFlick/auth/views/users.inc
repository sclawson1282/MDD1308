<h1>Blog It User Profiles -  Account Manager</h1>

<p>For more details, click on the accounts below.</p>

<ul>
	<?php foreach ($rows as $row); ?>
	
	<li>
		<form action="getUsers" method="post">
		<div>
			<?php echo "<a href='details.php?userid=".$row["user_id"]. "'>".$row["user_name"]."</a>"; ?>
			<?php echo "<a href='createuser.php?action=deleteaction&userid=".$row["user_id"]."'>Delete</a>"; ?>
			<?php echo "<a href='createuser.php?action=editform&userid=".$row["user_id"]."'>Edit</a>"; ?>
		</div>
		</form>
	</li>
	<?php endforeach; ?>
</ul>

<p><a href="auth.php?">Back to previous page</a><br>