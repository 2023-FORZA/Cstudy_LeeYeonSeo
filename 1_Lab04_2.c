#include<stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	while (n != 0) {
		sum += n;
		n--;
		if (n == 0)
			break;
	}
	printf("%d", sum);

}