#include <stdio.h>

int main() {
    char chess[8][8];
    int count = 0;

    // ü���� �Է� �ޱ�
    for (int i = 0; i < 8; i++) {
        scanf("%s", chess[i]);
    }

    // �� ĭ�� ���� �ִ��� Ȯ��
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // (i + j)�� ¦���̸� �� ĭ
            if ((i + j) % 2 == 0 && chess[i][j] == 'F') {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
