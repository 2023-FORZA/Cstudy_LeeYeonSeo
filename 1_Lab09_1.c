#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {

	int n = 0, b = 0;
	char s[81];

	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++){
		scanf("%s", s);
		arr[i] = 0;
		for (int a = 0; a <= strlen(s); a++) {
			if (s[a] == 'O') {
				b++;
				arr[i] += b;
			}
			else{
				b = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}