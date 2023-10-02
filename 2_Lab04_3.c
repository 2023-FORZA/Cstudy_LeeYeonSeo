#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int s[26] = { 0 };

	for (int i = 0; i < N; i++) {
		char name[101];
		scanf("%s", name);
		s[name[0] - 'a']++;
	}

	int t = 0;

	for (int i = 0; i < 26; i++) {
		if (s[i] >= 5) {
			printf("%c", i + 'a');
			t++;
		}
	}
	if (t == 0) {
		printf("PREDAJA");
	}

	printf("\n");

	return 0;
}