#include <stdio.h>
#include <windows.h>

void hideCursor() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO c = {1, FALSE};
    SetConsoleCursorInfo(h, &c);
}

int main() {
    hideCursor();
    printf("Input: ");
    getchar();
    return 0;
}