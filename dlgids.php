<? ob_start("ob_gzhandler");

if (!isset($_GET['id'])) help_output("No id requested.");
$id = $_GET['id'];

//$data = file("$_SERVER[DOCUMENT_ROOT]/nwchelp/dlgids.txt");
$data = file("dlgids.txt");
$running_key = "";
$help = array();
foreach($data as $s) {
  if (preg_match('/^\|([a-zA-Z0-9\_]+)\|/',$s,$m)) {
    $running_key = $m[1];
    $help[$running_key] = "";
    }
  else if ($running_key) {
    $help[$running_key] .= $s;
    }
  }

if (isset($help[$id])) help_output($help[$id]);

help_output($help['IDH_UNASSIGNED']);

function help_output($s)
{
?><html><head><title>NoteWorthy Composer Dialog Help Tips</title></head>
<body><?=$s?></body>
</html>
<?
  exit;
}

?>