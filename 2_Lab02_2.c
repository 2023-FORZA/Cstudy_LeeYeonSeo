#include <stdio.h>

int main() {
    int dice1, dice2, dice3;


    scanf("%d %d %d", &dice1, &dice2, &dice3);

    int prize = 0;

    if (dice1 == dice2 && dice2 == dice3) {

        prize = 10000 + dice1 * 1000;
    }
    else if (dice1 == dice2 || dice2 == dice3 || dice1 == dice3) {

        if (dice1 == dice2) {
            prize = 1000 + dice1 * 100;
        }
        else if (dice2 == dice3) {
            prize = 1000 + dice2 * 100;
        }
        else {
            prize = 1000 + dice1 * 100;
        }
    }
    else {

        int max_dice = dice1;
        if (max_dice < dice2) max_dice = dice2;
        if (max_dice < dice3) max_dice = dice3;

        prize = max_dice * 100;
    }


    printf("%d\n", prize);

    return 0;
}