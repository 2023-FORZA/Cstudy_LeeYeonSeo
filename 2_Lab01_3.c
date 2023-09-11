#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int x, y;

    for (int i = max; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            x = i;
            break; 
        }
    }

    y = (a * b) / x;

    printf("%d\n%d\n", x, y);

    return 0;
}
