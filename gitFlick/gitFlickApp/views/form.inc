<!DOCTYPE html>
<html>
    <head>
        <title>gitFlick</title>
        <link rel="stylesheet" type="text/css" href="style.css" />
    </head>
    
    <body>
    
        <header id="head" >
        	<p>gitFlick User Login</p>
        	<p></p>
        </header>
        
        <div id="main-wrapper">
        	<div id="video-tut">
        		<h1>Watch this video on how to use gitFlick!</h1>
        		<video width="320" height="240" controls >
  					<source src="media/example.oggtheora.ogv" type="video/ogg">
 					<source src="media/example.mp4" type="video/mp4">
  					<source src="media/example.webmsd.webm" type="video/webm">
  					<object data="movie.mp4" width="320" height="240">
    				<embed width="320" height="240" src="movie.swf">
  					</object>
				</video>

       <!-- 	<iframe width="320" height="233" src="//www.youtube.com/embed/IQ5R4YK0FTs?autoplay=1" frameborder="0" allowfullscreen></iframe> -->
        	</div>
        	
        	<div id="login-wrapper">
            	<form method="post" action="?">
                	<ul>
                    	<li>
                        	<label for="usn">Username : </label>
                        	<input type="text" maxlength="30" required autofocus name="username" />
                    	</li>
                    
                    	<li>
                        	<label for="passwd">Password : </label>
                        	<input type="password" maxlength="30" required name="password" />
                    	</li>
                    	<li class="buttons">
                        	<input type="submit" name="login" value="Log me in" />
                            <input type="button" name="register" value="Register" onclick="location.href='register.php'" />
                    	</li>
                    
                	</ul>
            	</form>
            </div>    
            </div>
        </div>
    
    </body>
</html>