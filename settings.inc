<?php 

//Settings for VOTERS:


// IMPORTANT: change this one into the name of your homepage file, 
//           for example, index.php
$callingfile="index.php"; 

// File in which voting scores are kept
$filename = "score.txt"; 

// Change this password so no one else can access the admin.php via the web
$pwd="votespassword"; 

//Time between votes in seconds
$time_between_votes = 36000; 

// Width of graph in pixels
$graph_width = 100; 

// Height of graph in pixels
$graph_height = 6; 

// Messages (Can easily be used as 'dynamic headers' for the poll)
$message1="Your votes Please!";  
$message2="Thanks for Voting!";
$message3="Poll Results";

// Text on vote button
$vote_str="Vote"; 

// Use CSS code to style the 'vote' button
$buttonstyle="section.press button {
  color: #fff;
  background-color: #6496c8;
  border: none;
  border-radius: 15px;
  box-shadow: 0 10px #27496d;
}

section.press button:hover,
section.press button.hover {
  background-color: #417cb8
}

section.press button:active,
section.press button.active {
  background-color: #417cb8;
  box-shadow: 0 5px #27496d;
  transform: translateY(5px);
}
/* 
 Designed by ReyhanAF
 (c) 2017 ReyhanAF, All Right Reserved. 
*/;";
?>