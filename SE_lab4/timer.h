#pragma once
#include "stdafx.h"

int timer(int ms, int numCntActions);
VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime);