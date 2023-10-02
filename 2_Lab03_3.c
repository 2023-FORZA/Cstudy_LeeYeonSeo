#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int a, b;
		scanf("%d %d", &a, &b);

		int result = 1;
		for (int i = 0; i < b; i++) {
			result = (result * a) % 10;
		}
		if (result == 0) {
			printf("10\n");
		}
		else {
			printf("%d\n", result);
		}
	}

	return 0;
}