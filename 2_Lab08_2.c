#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int balls[101]; // 1부터 100까지의 공이므로 인덱스 1부터 사용
    for (int i = 1; i <= n; i++) {
        balls[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        swap(balls, a, b);
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", balls[i]);
    }

    return 0;
}
