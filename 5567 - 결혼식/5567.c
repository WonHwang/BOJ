/* BOJ - 5567번 결혼식 문제 */

#include <stdio.h>

int re[501][501];
int al[501];

void init() {
	int i, j;
	for (i = 0; i < 501; i++) {
		al[i] = 0;
		for (j = 0; j < 501; j++) re[i][j] = 0;
	}
}

void getinf(int N) {
	int i, a, b;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		re[a][b] = 1;
		re[b][a] = 1;
	}
	re[1][1] = 0;
	al[1] = 1;
}

void cal() {
	int N, T, i,j, res;
	scanf("%d", &N);
	scanf("%d", &T);
	init();
	getinf(T);
	for (res = 0, i = 2; i <= N; i++) {
		if (re[1][i] == 1) {
			if (al[i] != 1) {
				al[i] = 1;
				res++;
			}
			for (j = 2; j <= N; j++) {
				if (re[i][j] == 1) {
					if (al[j] != 1) {
						al[j] = 1;
						res++;
					}
				}
			}
		}
	}
	printf("%d\n", res);
}

int main() {
	cal();
	return 0;
}