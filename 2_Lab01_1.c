#include <stdio.h>

int stack[100001]; 
int top = -1;      

int main() {
    int K; 
    int num; 
    int sum = 0; 

    scanf("%d", &K);

    for (int i = 0; i < K; i++) {
        scanf("%d", &num);

        if (num == 0) { 
            sum -= stack[top];
            top--;
        }
        else { 
            stack[++top] = num;
            sum += num;
        }
    }

    printf("%d\n", sum);

    return 0;
}

