#include <stdio.h>

#define MAX_NUM 10000

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;
    }
    return sum;
}

int main() {
    int is_self_number[MAX_NUM + 1] = { 0 };  

    for (int i = 1; i <= MAX_NUM; i++) {
        int self_num = d(i);

      
        if (self_num <= MAX_NUM) {
            is_self_number[self_num] = 1;
        }
    }

    
    for (int i = 1; i <= MAX_NUM; i++) {
        if (!is_self_number[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}
