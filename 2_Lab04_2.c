#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char** hear = (char**)malloc(sizeof(char*) * n);
    char** see = (char**)malloc(sizeof(char*) * m);


    for (int i = 0; i < n; i++) {
        hear[i] = (char*)malloc(sizeof(char) * 21);
        scanf("%s", hear[i]);
    }


    for (int i = 0; i < m; i++) {
        see[i] = (char*)malloc(sizeof(char) * 21);
        scanf("%s", see[i]);
    }


    qsort(hear, n, sizeof(char*), compareStrings);
    qsort(see, m, sizeof(char*), compareStrings);

    int count = 0;
    char*** result = (char***)malloc(sizeof(char**) * (n > m ? n : m)); // 최대 n, m 중 큰 수만큼 할당


    for (int i = 0; i < n; i++) {
        if (bsearch(&hear[i], see, m, sizeof(char*), compareStrings) != NULL) {
            result[count] = &hear[i];
            count++;
        }
    }


    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", *result[i]);
    }


    for (int i = 0; i < n; i++) {
        free(hear[i]);
    }
    for (int i = 0; i < m; i++) {
        free(see[i]);
    }
    free(hear);
    free(see);
    free(result);

    return 0;
}