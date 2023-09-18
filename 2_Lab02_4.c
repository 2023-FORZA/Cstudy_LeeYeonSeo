#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int arr[10];


        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }


        qsort(arr, 10, sizeof(int), compare);


        printf("%d\n", arr[7]);
    }

    return 0;
}