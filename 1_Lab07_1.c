#include <stdio.h>

int main() {
	int t, r, j;
	char s[20];

	scanf_s("%d", &t);

	for (int i = 0; i < t; ++i) {
		scanf_s("%d %s", &r, s);

		j = 0;
		while (s[j]) {
			for (int k = 0; k < r; ++k) {
				printf("%c", s[j]);
			}
			++j;
		}
		printf("\n");
	}
	return 0;
}