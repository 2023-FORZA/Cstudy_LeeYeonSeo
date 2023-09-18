#include <stdio.h>
#include <math.h>

int main()
{
    double length, height, width;
    float x;
    scanf("%lf %lf %lf", &length, &height, &width);
    x = length / sqrt(pow(height, 2) + pow(width, 2));
    printf("%d ", (int)sqrt((length * length * height * height / (height * height + width * width))));
    printf("%d", (int)sqrt((length * length * width * width / (height * height + width * width))));
}
