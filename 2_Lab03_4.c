#include <stdio.h>

int main() {
    char str[1000001]; 

    
    scanf("%s", str);

    int count0 = 0; 
    int count1 = 0; 

    
    if (str[0] == '0') {
        count1++;
    }
    else {
        count0++;
    }

    
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != str[i - 1]) {
            if (str[i] == '0') {
                count1++;
            }
            else {
                count0++;
            }
        }
    }

    
    printf("%d\n", (count0 < count1) ? count0 : count1);

    return 0;
}
