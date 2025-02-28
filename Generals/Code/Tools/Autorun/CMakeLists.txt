add_definitions(-D_AFXDLL)
set(CMAKE_MFC_FLAG 1)

add_executable(
	Autorun
	WIN32
	"ARGS.CPP"
	"autorun.cpp"
	"CDCNTRL.CPP"
	"DrawButton.cpp"
	"EZGIMEX.cpp"
	"GameText.cpp"
	"GETCD.CPP"
	"IGR.cpp"
	"Jsupport.cpp"
	"locale.cpp"
	"Locale_API.cpp"
	"TTFont.cpp"
	"Utils.cpp"
	"ViewHTML.cpp"
	"WinFix.CPP"
	"Wnd_file.cpp"
	"WSYS_File.cpp"
	"WSYS_FileSystem.cpp"
	"WSYS_RAMFile.cpp"
	"WSYS_StdFile.cpp"
	"WSYS_StdFileSystem.cpp"
)

target_link_libraries(Autorun "winmm")
