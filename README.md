# Mini Phone Cplusplus
 A Mini implementation of Phone's basic applications in C++ using various data structures
 <br /> Works correctly in Windows only right now because of platform specific issues.
 <br /> To execute in Linux platform,
 * Remove #include<windows.h> 
 * Change Sleep(milliseconds) to sleep(seconds)
 * Change from 'cls' to 'clear' in system("cls");

## Menu
1. Contacts
2. Game
3. Calculator
4. Calendar
5. Time

## Instructions 
 To compile it, run 
 ```cpp
 g++ phone.cpp [-o <file>](Optional).
 ```
  <br /> Then run the executable file i.e. .exe incase of Windows and .out incase of Linux platform.
