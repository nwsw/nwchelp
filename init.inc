<?
require_once("$_SERVER[DOCUMENT_ROOT]/inithtm.inc");

//$HTMLDoc->JavascriptFile = "nwhelp.js";

$HTMLDoc->ExtraHdrOpts .= <<<__EOTEXT
<link rel=stylesheet type="text/css" href="nwc2hlp.css"> 
__EOTEXT;

$HTMLDoc->BodyHdr .= <<<___EOTEXT
<p class=nav2>
<a href="/nwc2/">Composer 2</a>-&gt;<a href="./">NWC2 Help</a> &nbsp;
[<a href="./">Contents</a> &middot;
<a href=HELP_ONWHATSNEW.htm>What&rsquo;s New</a> &middot;
<a href=HELP_ONCOMMANDS.htm>Commands</a> &middot;
<a href=HELP_ONKEYBOARD.htm>Keyboard Shortcuts</a>]
___EOTEXT;

?>