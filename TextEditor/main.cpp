#include <Windows.h>
#include <string>

// create window
// allow window to be resizable and allow user to type inside of the window.
// create a toolbar in the window for saving the current file.
const char g_sz_class_name[] = "myWindowClass";

int WINAPI WinMain(HINSTANCE h_instance, HINSTANCE h_prev_instance,
	LPSTR lp_cmd_line, int n_cmd_show)
{
	WNDCLASSEX wc;
	HWND hwnd;
	MSG msg;

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = h_instance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_sz_class_name;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "Window Registration Failed", "Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	test



	return 0;
}