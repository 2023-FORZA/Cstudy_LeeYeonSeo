#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int X;
	int min = 1000000;
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &X);

		if (X > max) {
			max = X;
		}
		if (X < min) {
			min = X;
		}

	}
	printf("%d", min * max);
}
