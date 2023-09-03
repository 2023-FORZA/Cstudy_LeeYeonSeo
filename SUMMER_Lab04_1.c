#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char filenames[50][51];
    char pattern[51];

    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%s", filenames[i]);
    }

    int length = strlen(filenames[0]);


    for (int i = 0; i < length; i++) {
        char current = filenames[0][i];
        int same = 1;
        for (int j = 1; j < n; j++) {
            if (current != filenames[j][i]) {
                same = 0;
                break;
            }
        }

        if (same) {
            pattern[i] = current;
        }
        else {
            pattern[i] = '?';
        }
    }

    pattern[length] = '\0';

    printf("%s\n", pattern);

    return 0;
}
