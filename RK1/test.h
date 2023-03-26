#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>

#define MAXTIME 3600
#define MAXMISTAKES 100

#define StartBtn_id 1
#define Difficulty_id 2
#define Time_id 3
#define Mistakes_id 4

RECT pointer;
#define pointerHeight 40
#define pointerWidth 15

RECT textfield;

HWND time_txt, mistakes_txt;
HWND hwnd_set, hwnd;

HDC dc;

LRESULT WindowProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);