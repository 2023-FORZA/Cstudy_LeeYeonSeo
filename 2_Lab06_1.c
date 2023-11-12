#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            int result;
            scanf("%d", &result);
            count += result;
        }

        switch (count) {
        case 0:
            printf("D\n"); // µµ
            break;
        case 1:
            printf("C\n"); // °³
            break;
        case 2:
            printf("B\n"); // °É
            break;
        case 3:
            printf("A\n"); // À·
            break;
        case 4:
            printf("E\n"); // ¸ð
            break;
        }
    }

    return 0;
}
