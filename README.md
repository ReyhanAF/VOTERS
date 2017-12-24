## VOTERS

VOTERS is Apps designed Perfectly, written in php.
Using lightweight (no database required) files to store Votes Scores.
Version 1.0 Write all Events in Log File, log.dat

## Code Example

> Get IP
```
function getIP() {
	if (getenv("HTTP_CLIENT_IP")) $ip = getenv("HTTP_CLIENT_IP");
	else if(getenv("HTTP_X_FORWARDED_FOR")) $ip = getenv("HTTP_X_FORWARDED_FOR");
	else if(getenv("REMOTE_ADDR")) $ip = getenv("REMOTE_ADDR");
	else $ip = "UNKNOWN";
return $ip;
}
```

## Installation
Step 1: Files
Upload the following files to Web server:

* settings.inc
* source.php
* admin.php
* index.php
* about.php
* votes_recookie.php
* score.txt
* log.dat
* zero.gif
* value.gif

Step 2: Permission
Change the Permission for Following FIles
"score.txt" and "log.dat"
to 666 - can be "write" and "read".

Step 3: Votes
open admin.php in your Browsers, and set your Votes.

(Password = "votespassword")

Step 4: Testing
Test your Votes at index.php.

Step 5: Settings
open 'settings.inc' files

using Text Editor and setup as you want.

IMPORTANT: Change password
 for a Security Reason!

Step 6: Customize
You can change the style for vote buttons
to makes perfects on your pages. Do this, 
Input CSS code in $buttonstyle 
variable in settings.inc. For example, to get black buttons
with white border and white text:

```
$buttonstyle="border:1px solid white; 
 background:black;color:white;";
```

Step 7: Logs
open log.dat to get overview about
events, new votes, attack attempts, etc.

## API Reference

API v0.02

Insert this code to your web and your ready, don't forget to also include `<?php include("source.php");?>` else your vote will not visible.


```
<?php echo($question); ?><br><br>
			<?php
			if($votingstep==1) { echo($step1str); }
			if($votingstep==2) { echo($step2str); }
			if($votingstep==3) { echo($step3str); }
			?><br>
			Total Votes: <?php echo($totalvotes); ?>
```

## Contributors

Contribute with us!
- [ ] API
- [ ] Design
- [ ] Security
- [x] Votes Bar Length

## License
Licensed under 
