#include <stdio.h>

int main() {
    int x, y;
    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    char* week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    scanf("%d %d", &x, &y);

    int totalDays = 0;
    for (int i = 1; i < x; i++) {
        totalDays += days[i];
    }
    totalDays += y;

    printf("%s\n", week[totalDays % 7]);

    return 0;
}
