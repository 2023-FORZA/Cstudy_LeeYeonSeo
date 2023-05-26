#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int M;
	scanf("%d", &M);
	int ball = 1;
	int X, Y;
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &X, &Y);
		if (X == ball)
		{
			ball = Y;
		}
		else if (Y == ball)
		{
			ball = X;
		}
	}
	printf("%d", ball);
}