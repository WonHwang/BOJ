/* BOJ - 15652�� N�� M(4) ���� */

#include <stdio.h>

int N, M, arr[9];

void init() {
	for (int i = 0; i < 9; i++) arr[i] = 0;
	scanf("%d %d", &N, &M);
}

void print() {
	for (int i = 1; i <= M; i++) printf("%d ", arr[i]);
	printf("\n");
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
	else if (d > 1) {
		for (i = arr[d - 1]; i <= N; i++) {
			arr[d] = i;
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