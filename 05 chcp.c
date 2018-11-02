#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void displayMsg(char s[], int delay) {
    for (int i = 0; s[i]; i++) {
        printf("%c", s[i]);
        Sleep(delay);
    }
}

int main() {
    system("chcp 65001 & cls");
    displayMsg("哈囉，這是什麼？", 75);
    Sleep(1000);
    return 0;
}