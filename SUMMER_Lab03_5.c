#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);

        int total = 0;
        for (int i = 0; i < N; i++) {
            int candy;
            scanf("%d", &candy);
            total += candy / K;
        }

        printf("%d\n", total);
    }

    return 0;
}
