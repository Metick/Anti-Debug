#include <Windows.h>
#include <iostream>

DWORD WINAPI Dummy(LPVOID lpParam) {
    while (true) {
        Sleep(0);
    }
    return 0;
}

int main() {
    HANDLE dummyThread = CreateThread(NULL, NULL, Dummy, NULL, NULL, NULL);
    while (true) {

        if (ResumeThread(dummyThread) >= 1) {
            printf("Catched Debugger");
            //crash process
            for (long long int i = 0; ++i; (&i)[i] = i);
            *((char*)NULL) = 0;
        }

        Sleep(1);
    }
}
