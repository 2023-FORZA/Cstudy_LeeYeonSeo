#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    int l1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int l2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    int l3 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);

    int l123[3] = { l1, l2, l3 };
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (l123[i] > l123[j]) {
                int temp = l123[i];
                l123[i] = l123[j];
                l123[j] = temp;
            }
        }
    }

    int s = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1);

    if (x1 == x2 && x1 == x3) {
        printf("X\n");
    }
    else if (y1 == y2 && y1 == y3) {
        printf("X\n");
    }
    else if (s == 0) {
        printf("X\n");
    }
    else if (l1 == l2 && l2 == l3) {
        printf("JungTriangle\n");
    }
    else if (l1 == l2 || l2 == l3 || l3 == l1) {
        if (l123[2] == l123[0] + l123[1]) {
            printf("Jikkak2Triangle\n");
        }
        else if (l123[2] > l123[0] + l123[1]) {
            printf("Dunkak2Triangle\n");
        }
        else {
            printf("Yeahkak2Triangle\n");
        }
    }
    else {
        if (l123[2] == l123[0] + l123[1]) {
            printf("JikkakTriangle\n");
        }
        else if (l123[2] > l123[0] + l123[1]) {
            printf("DunkakTriangle\n");
        }
        else {
            printf("YeahkakTriangle\n");
        }
    }

    return 0;
}
