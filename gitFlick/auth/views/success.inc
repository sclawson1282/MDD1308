<!DOCTYPE html>
<html lang="en-US" ng-app="Site">
<head>
	<meta charset="UTF-8">
	<title>gitFlick</title>
	
<!--<link href="//netdna.bootstrapcdn.com/twitter-bootstrap/2.2.1/css/bootstrap.min.css" rel="stylesheet">-->
	<link rel="stylesheet" href="bootstrap.min.css" />
	<link rel="stylesheet" href="style2.css" /> 
	<style type="text/css">
  		body {
  		  padding-top:60px;
  		}
  	</style>
</head>

<body>

<!-- Navbar -->
  <div class="navbar navbar-fixed-top">
    <div class="navbar-inner">
      <div class="container">
        <a class="brand" href="#/page/home">Welcome to gitFlick</a>
        
     	 <header>
          	<form><input type="search" placeholder="Search images" /></form><h6><a href="views/logout.php">Log Out</a></h6>
          		<h7 class="privacy"><span></span>&copy;&nbsp;2013&nbsp;| <a href="views/privacy.inc">Privacy Policy</a>&nbsp;
      				</h7>
         </header>
      </div>
    </div>
  </div>
  
  
	<header>
		<h4>Welcome to gitFlick!</h4><br>
		<h5>To search images, enter in a description in the search field above!</h5>
	</header> 
	<ul class="results"></ul>
	<footer>
		
	</footer>

	<!-- _underscore templates -->
	<script type="text/template" id="searchresults">
		<li><img class="<%= tick ? 'tick' : '' %>" src="http://farm<%= farm %>.static.flickr.com/<%= server %>/<%= id %>_<%= secret %>_t.jpg" /><span class="action"></span></li>
	</script>

	<script type="text/template" id="preview">
		<img class="<%= tick ? 'tick' : '' %>" src="http://farm<%= farm %>.static.flickr.com/<%= server %>/<%= id %>_<%= secret %>_z.jpg" />
	</script> 
	<article></article>
	
	<script src="js/jquery.min.js"></script>
	<script src="js/underscore.js"></script>
	<script src="js/backbone.js"></script>
	<script src="js/backbone-localstorage.js"></script>
	<script src="js/script.js"></script>
	

</body>

</html>


<p></p> 

