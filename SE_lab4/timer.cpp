#include "stdafx.h"
#include "View.h"

using namespace std;

int timer(int ms, int numCntActions) {
	HANDLE hTimer = NULL;
	LARGE_INTEGER liDueTime;
	LPCWSTR nameTimer = L"WaitableTimer";

	liDueTime.QuadPart = -10000 * (ULONGLONG)ms;

	// Create a waitable timer.
	hTimer = CreateWaitableTimer(NULL, TRUE, nameTimer);
	if (NULL == hTimer) {
		printf("CreateWaitableTimer failed (%lu)\n", GetLastError());
		return 1;
	}

	printf("Waiting for %d ms...\n", ms);

	while (numCntActions--) {
		// Set a timer to wait for ms milliseconds.
		if (!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)) {
			printf("SetWaitableTimer failed (%lu)\n", GetLastError());
			return 2;
		}
		Accumulator *kek = new Accumulator(true, 12.1, 11.1, 5000, "Li-On");
		View3 foo = View3(kek);
		// Wait for the timer.
		if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0) {
			printf("WaitForSingleObject failed (%lu)\n", GetLastError());
		}
		else {
			foo.display();
			printf("Timer was signaled.\n");
		}
	}
	return 0;
}