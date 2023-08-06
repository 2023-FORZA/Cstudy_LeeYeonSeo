#include <stdio.h>

double calculateVolume(double a) {
    return (a * a * a) / 6.0;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        double a;
        scanf("%lf", &a);
        double volume = calculateVolume(a);
        printf("%.10lf\n", volume);
    }

    return 0;
}
