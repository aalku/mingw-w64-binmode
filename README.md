# mingw-w64-binmode
Code to set binary mode as default on mingw64. By @dkimitsa.

I got it from here. He's contributing it to an open source project so I assume it's open source too.

https://sourceforge.net/p/mingw-w64/bugs/693/

Just include it in your compilation and it open your files as binary even on Windows unless you use `O_TEXT` flag. But that doesn't exist in POSIX so what's the point.

Example:

`gcc -o myExecutable myExecutable.c binmode.c ...`
