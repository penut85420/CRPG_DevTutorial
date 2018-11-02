#include <stdio.h>
#include <stdlib.h>

int main() {
    int upper = 100, lower = 0, ans, n, count = 0;
    ans = rand() % 99 + 1;
    printf("猜一個 %d 到 %d 之間的數字：", lower, upper);
    scanf("%d", &n);

    while (n != ans) {
        if (n > ans) {
            printf("太大囉！\n");
            if (n < upper) upper = n;
        } else if (n < ans) {
            printf("太小囉！\n");
            if (n > lower) lower = n;
        }
        printf("你已經猜錯了 %d 次\n", ++count);
        printf("猜一個 %d 到 %d 之間的數字：", lower, upper);
        scanf("%d", &n);
    }

    printf("猜對了！\n");

    return 0;
}