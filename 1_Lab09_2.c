#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	int sum = 0;

	scanf("%d", &n);
	char* arr = malloc(sizeof(int) * n);
	scanf("%s", arr);
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i]-'0';
	}
	printf("%d", sum);
	
}