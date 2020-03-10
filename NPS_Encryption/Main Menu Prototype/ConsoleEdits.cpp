#include <iostream>
#include <Windows.h>

using namespace std;

class Console {

public:

	HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);

	void hidecursor()
	{
		HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO info;
		info.dwSize = 100;
		info.bVisible = FALSE;
		SetConsoleCursorInfo(consoleHandle, &info);
	}  

	// comment

	void DisableResize()
	{
		/*
		It only disable resizing by dragging the edge of windows. By the way, WS_SIZEBOX is the same as WS_THICKFRAME because of

		#define WS_SIZEBOX WS_THICKFRAME
		*/

		HWND hWnd = GetConsoleWindow();
		::SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);

	}

	void gameTitleWindow() {

		SetConsoleTitle("NPS Encryption Tool");
	}

	void disableMaximize() {

		// https://stackoverflow.com/questions/46145256/disable-maximize-button-c-console-application

		HWND hwnd = GetConsoleWindow();
		DWORD style = GetWindowLong(hwnd, GWL_STYLE);
		style &= ~WS_MAXIMIZEBOX;
		SetWindowLong(hwnd, GWL_STYLE, style);
		SetWindowPos(hwnd, NULL, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_FRAMECHANGED);
	}

	void disableHighlighting() {
		DWORD prev_mode;
		GetConsoleMode(hInput, &prev_mode);
		SetConsoleMode(hInput, ENABLE_EXTENDED_FLAGS |
			(prev_mode & ~ENABLE_QUICK_EDIT_MODE));
	}

private:


};

