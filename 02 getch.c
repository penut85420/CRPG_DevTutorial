#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(short x, short y) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = {x, y};
    SetConsoleCursorPosition(h, c);
}

void displayMenu() {
    puts("   [1] New Game");
    puts("   [2] Continue");
    puts("   [3] Settings");
    puts("   [4] Bye Bye!");
}

int main() {
    system("cls");
    char c, i = 0;

    gotoxy(0, 0);
    displayMenu();

    gotoxy(1, i);
    printf(">");
    while (c = getch()) {
        gotoxy(1, i);
        printf(" ");
        if (c == 'w') i = (i + 3) % 4; 
        else if (c == 's') i = (i + 1) % 4;
        else if (c == 'k') return 0;
        gotoxy(1, i);
        printf(">");
    }
    return 0;
}