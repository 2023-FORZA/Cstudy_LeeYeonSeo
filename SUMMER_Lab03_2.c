#include <stdio.h>

int main() {
    int counts[10] = { 0 };  
    char roomNumber[10];
    scanf("%s", roomNumber);

    for (int i = 0; roomNumber[i] != '\0'; i++) {
        int digit = roomNumber[i] - '0';
        counts[digit]++;
    }


    int group = (counts[6] + counts[9] + 1) / 2;

    int maxCount = 0;
    for (int i = 0; i < 9; i++) {
        if (i == 6) continue;  
        if (counts[i] > maxCount) {
            maxCount = counts[i];
        }
    }

    if (group > maxCount) {
        printf("%d\n", group);
    }
    else {
        printf("%d\n", maxCount);
    }

    return 0;
}
