<?php

if (empty($_GET['id'])) help_output("No id requested.");
$id = $_GET['id'];

$data = file("helptips.txt");
$running_key = "";
$help = array();

foreach($data as $s) {
	if (preg_match('/^\|([a-zA-Z0-9\_]+)\|/',$s,$m)) {
		$running_key = $m[1];
		$help[$running_key] = "";
	} else if ($running_key) {
		$help[$running_key] .= $s;
	}
}

if (isset($help[$id])) help_output($help[$id]);

help_output($help['tip_unassigned']);

function help_output($s)
{
?><html><head><title>NoteWorthy Composer Help Tips</title></head>
<body><?php echo $s?></body>
</html>
<?php
	exit;
}
