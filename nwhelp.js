function stopErr() { return true; }

window.onError = stopErr;

function IDHTip(Id) {
  DlgURL = 'dlgids.php?id=' + Id;
  DlgWin = window.open(DlgURL,'DialogTip','scrollbars=yes,resizable=yes,width=400,height=150');
  if (DlgWin.focus) { DlgWin.focus(); }
  }

function HLPTip(Id) {
  DlgURL = 'helptips.php?id=' + Id;
  DlgWin = window.open(DlgURL,'DialogTip','scrollbars=yes,resizable=yes,width=400,height=150');
  if (DlgWin.focus) { DlgWin.focus(); }
  }
