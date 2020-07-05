/* BOJ - 15650번 N과 M(2) 문제 */

#include <stdio.h>

int arr[9], k, N, M;

void init() {
	for (int i = 0; i < 9; i++) arr[i] = 0;
	k = 1;
	scanf("%d %d", &N, &M);
}

void print() {
	for (int i = 1; i <= M; i++) printf("%d ", arr[i]);
	printf("\n");
}

int usedcheck(int n, int d) {
	for (int i = 1; i < d; i++) if (arr[i] == n) return 0;
	return 1;
}

void cal(int d) {
	int i;
	
	if (d > M) return;

	if (d == 1) {
		for (i = 1; i <= N; i++) {
			arr[d] = i;
			if (d == M) print();
			cal(d + 1);
		}
	}
	else if (d > 1){
		for (i = arr[d-1]; i <= N; i++) {
			if (usedcheck(i, d)) arr[d] = i;
			else continue;
			if (d == M) print();
			cal(d + 1);
		}
	}
}

int main() {
	init();
	cal(1);
	return 0;
}