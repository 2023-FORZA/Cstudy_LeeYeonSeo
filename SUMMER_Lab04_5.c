#include <stdio.h>

int main() {
    int price; 
    scanf("%d", &price);

    int change = 1000 - price; 

    int coins[6] = { 500, 100, 50, 10, 5, 1 }; 

    int coin_count = 0; 

    for (int i = 0; i < 6; i++) {
        while (change >= coins[i]) {
            change -= coins[i]; 
            coin_count++;       
        }
    }

    printf("%d\n", coin_count);

    return 0;
}
