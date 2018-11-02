#include <stdio.h>
#include <windows.h>

void gotoxy(short x, short y) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = {x, y};
    SetConsoleCursorPosition(h, c);
}

int main() {
    gotoxy(3, 5);
    printf("Hello");
    getchar();
    return 0;
}