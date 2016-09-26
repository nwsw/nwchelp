function stopErr() { return true; }

window.onError = stopErr;

function IDHTip(Id) {
  DlgURL = '_dlgids.htm#' + Id;
  DlgWin = window.open(DlgURL,'DialogTip','scrollbars=yes,resizable=yes,width=400,height=200');
  if (DlgWin.focus) { DlgWin.focus(); }
  }

function HLPTip(Id) {
  DlgURL = '_tips.htm#' + Id;
  DlgWin = window.open(DlgURL,'DialogTip','scrollbars=yes,resizable=yes,width=400,height=200');
  if (DlgWin.focus) { DlgWin.focus(); }
  }
