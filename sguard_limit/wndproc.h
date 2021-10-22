#pragma once
#include <Windows.h>


#define VERSION             "21.10.22"

#define WM_TRAYACTIVATE     WM_APP + 10U

#define IDM_TITLE           200
#define IDM_EXIT            201
#define IDM_SWITCHMODE      202


// limit wndproc button command
#define IDM_PERCENT90       203
#define IDM_PERCENT95       204
#define IDM_PERCENT99       205
#define IDM_PERCENT999      206
#define IDM_STOPLIMIT       207


// trace wndproc button command
#define IDM_LOCK3           208
#define IDM_LOCK1           209
#define IDM_LOCK3RR         210
#define IDM_LOCK1RR         211
#define IDM_SETRRTIME       212
#define IDM_UNLOCK          213


// mempatch wndproc button command
#define IDM_DOPATCH         214
#define IDM_UNDOPATCH       215
#define IDM_SETDELAY        216
#define IDM_PATCHSWITCH1    217
#define IDM_PATCHSWITCH2    218
#define IDM_PATCHSWITCH3    219


LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);