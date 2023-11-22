#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int seats[101] = { 0 }; 
    int rejectedCount = 0;

    for (int i = 0; i < n; i++) {
        int seatNumber;
        scanf("%d", &seatNumber);

        if (seats[seatNumber] == 0) {
            seats[seatNumber] = 1; 
        }
        else {
            rejectedCount++; 
        }
    }

    printf("%d\n", rejectedCount);

    return 0;
}
