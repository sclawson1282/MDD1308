<?php

session_start();

unset($_SESSION['userInfo']);

session_regenerate_id(true);

session_destroy();

header('Location: ../auth.php');
exit;

?> 