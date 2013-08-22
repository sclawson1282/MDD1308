<h1>Blog It User Profiles - Update Profile/h1>

<p>You are updating your profile.</p>

<? foreach($data as $row){?>
<form action="?action=editaction" method="POST" enctype="multipart/form-data">
	<label>First Name</label>
	<input type="text" name="firstname" id="firstname" maxlength="20" size="20" value="<?echo $row['firstname']?>" /><br />
	
	<label>Last Name</label>
	<input type="text" name="lastname" id="lastname" maxlength="20" size="20" value="<?echo $row['lastname']?>" /><br />
	
	<label>Username</label>
	<input type="text" name="username" id="username" maxlength="20" size="20" value="<?echo $row['user_name']?>" /><br />
	
	<label>Password</label>
	<input type="text" name="password" id="password" maxlength="20" size="20" /><br /> value="<?echo $row['user_password']?>"
	
	<input type="hidden" name="userid" id="userid" value"<? echo $row['user_id]?> />
	
	<input type"submit" />
	
</form> 

<? } ?> 