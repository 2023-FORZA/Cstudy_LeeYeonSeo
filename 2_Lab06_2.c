#include <stdio.h>

int main() {
    char chess[8][8];
    int count = 0;

    // 체스판 입력 받기
    for (int i = 0; i < 8; i++) {
        scanf("%s", chess[i]);
    }

    // 흰 칸에 말이 있는지 확인
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // (i + j)가 짝수이면 흰 칸
            if ((i + j) % 2 == 0 && chess[i][j] == 'F') {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
