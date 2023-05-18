#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x[9];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &x[i]);
		
	}
	int max = 0;
	int a = 0;
	for (int i = 0; i < 9; i++)
	{
		if (x[i] > max) {
			max = x[i];
			a = i;
				
		}
	}
	printf("%d\n%d", max, a+1);
}
