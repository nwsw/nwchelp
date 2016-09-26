<?php
$HTMLDoc->AddJavascriptFile("nwhelp.js");

$HTMLDoc->CSSInline .= <<<___EOTEXT
.nav2 a {display: inline-block; border:1px solid #aaa; border-radius: 6px; margin:0 0 8px 0; white-space:nowrap; background-color:#EEE; padding:5px;}
.nav2folder a {background-color:white;}
.nav2folder a:before {content:url(/img/ico-bluefolder.png); padding:0px 5px; vertical-align: middle;}
.nav2 a:hover {background-color:#CCC; color:#00F; text-decoration:none;}
___EOTEXT;

$HTMLDoc->BodyHdr .= <<<___EOTEXT
<div class="alert alert-info">You are viewing the help file included in NoteWorthy Composer Version 1.75</div>
<div class="nav2">
<span class="nav2folder"><a href="./">Help</a></span>
<a href="./">Intro</a>
<a href=HELP_ONSTARTINGUP.htm>Starting Up</a>
<a href=HELP_TROUBLESHOOT.htm>Common Questions</a>
<a href=HELP_ONCOMMANDS.htm>Commands</a>
<a href=HELP_ONKEYBOARD.htm>Keyboard Shortcuts</a>
</div>
___EOTEXT;
