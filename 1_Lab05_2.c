#include<stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);
	int x[101];
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &x[i]);
	}
	int a = 0;
	int v;
	scanf_s("%d", &v);
	for (int i = 0; i < N; i++){
		if (v == x[i]) {
			a += 1;
	
		}
	
	}
	printf("%d", a);
	
}