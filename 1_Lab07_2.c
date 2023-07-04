#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    int num[26];
    int i, j;

    scanf_s("%s", S);

    for (i = 0; i < 26; i++) {
        num[i] = -1;
    }
    for (j = 0; j < strlen(S); j++) {
        if (num[S[j] - 'a'] == -1) {
            num[S[j] - 'a'] = j;
        }
        else {
        }
    }
    for (i = 0; i < 26; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

