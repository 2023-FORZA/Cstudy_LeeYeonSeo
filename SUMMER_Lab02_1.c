#include <stdio.h>

int main() {
    int input, original, result, cycle = 0;

    scanf("%d", &input);

    original = input;

    do {
        result = (input % 10) * 10 + ((input / 10) + (input % 10)) % 10;
        input = result;
        cycle++;
    } while (input != original);

    printf("%d\n", cycle);

    return 0;
}
