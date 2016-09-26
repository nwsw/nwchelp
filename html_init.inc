<?php

$HTMLDoc->AddCSSFile("nwc2hlp.css");

$HTMLDoc->BodyHdr .= '<div class="alert alert-info">You are viewing the included help system in NoteWorthy Composer Version 2.75a (currently in beta release)</div>'.
	BuildNWSoftwareBodyNavBar(array(
	"./" => "Help Contents",
	"HELP_ONWHATSNEW.htm" => "What&rsquo;s New",
	"HELP_ONCOMMANDS.htm" => "Commands",
	"HELP_ONKEYBOARD.htm" => "Keyboard Shortcuts"
	));
