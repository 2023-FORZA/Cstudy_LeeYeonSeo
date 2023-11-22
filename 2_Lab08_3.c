#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return 1; // 찾았을 경우
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return 0; // 못 찾았을 경우
}

int main() {
    int n, m;
    scanf("%d", &n);

    int* cards = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }

    qsort(cards, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int target;
        scanf("%d", &target);

        if (binarySearch(cards, 0, n - 1, target)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }

    free(cards);
    return 0;
}
