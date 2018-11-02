#include <stdio.h>
#include <windows.h>

void displayMsg(char s[], int delay) {
    for (int i = 0; s[i]; i++) {
        printf("%c", s[i]);
        Sleep(delay);
    }
}

int main() {
    displayMsg("Hello, what is this?", 100);
    Sleep(1000);
    
    return 0;
}