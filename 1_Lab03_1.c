#define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A &B);
	if (A > B)
		printf(">");
	else if (B > A)
		printf("<");
	else
		printf("==")
}