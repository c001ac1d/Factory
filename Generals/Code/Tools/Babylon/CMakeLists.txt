add_definitions(-D_AFXDLL)
set(CMAKE_MFC_FLAG 1)

add_executable(
	noxstring
	WIN32
	"bin.cpp"
	"DlgProxy.cpp"
	"excel8.cpp"
	"expimp.cpp"
	"ExportDlg.cpp"
	"fileops.cpp"
	"GenerateDlg.cpp"
	"iff.cpp"
	"list.cpp"
	"loadsave.cpp"
	"MatchDlg.cpp"
	"noxstring.cpp"
	"noxstringDlg.cpp"
	"olestring.cpp"
	"ProceedDlg.cpp"
	"Report.cpp"
	"RetranslateDlg.cpp"
	"StdAfx.cpp"
	"transcs.cpp"
	"TransDB.cpp"
	"VerifyDlg.cpp"
	"VerifyTextDlg.cpp"
	"ViewDBsDlg.cpp"
	"XLStuff.cpp"

	"noxstring.rc"
)
