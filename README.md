Anti-Debug POC

Catching debuggers using ResumeThread

When attaching a debugger, the thread will be suspended just for a moment therefore, by checking the thread's current suspend count, we can find out if we are being debugged.
To achieve that we will call the ResumeThread WinAPI function which will return the thread's suspend count (and subsequently reduce it by 1).

It goes without saying, that if your program suspends the thread, you should account for it on your Anti-Debugger.

https://user-images.githubusercontent.com/45372336/179329323-133c521d-b263-47a4-ba68-5367ed56c85e.mp4

