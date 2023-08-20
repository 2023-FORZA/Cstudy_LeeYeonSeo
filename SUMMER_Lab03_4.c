#include <stdio.h>

void print_j_box(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                printf("#");
            }
            else {
                if (j == 0 || j == n - 1) {
                    printf("#");
                }
                else {
                    printf("J");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        print_j_box(n);
        printf("\n");
    }

    return 0;
}
