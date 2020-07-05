/* BOJ - 15649번 N과 M(1) 문제 */

#include <stdio.h>

int N, M, k, a[9];

void getinfo() {
	for (int j = 0; j < 9; j++) a[j] = 0;
	scanf("%d %d", &N, &M);
	k = 1;
}

void print() {
	for (int i = 1; i <= M; i++) printf("%d ", a[i]);
	printf("\n");
}

int checkused(int d, int i) {
	for (int j = 1; j < d; j++) {
		if (a[j] == i) return 1;
	}
	return 0;
}

void cal(int d) {

	int i;

	for (i = 1; i <= N; i++) {
		if (d > M) return;

		if (checkused(d, i)) continue;

		a[d] = i;

		if (d == M) print();

		cal(d + 1);
	}
}

int main() {
	getinfo();
	cal(k);
	
	return 0;
}