#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int A, B;
	int C;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	A += C / 60;
	B += C % 60;

	if (B >= 60) {
		A += 1;
		B -= 60;
	}

	A %= 24;

	printf("%d %d\n", A, B);

	return 0;

}