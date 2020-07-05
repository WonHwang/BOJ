/* acmicpc.net - 2698번 인접한 비트의 개수 문제 */

#include <stdio.h>

int nk[101][101][2];

void init() {
	int i, j, k;

	for (i = 0; i < 101; i++) {
		for (j = 0; j < 101; j++) {
			for (k = 0; k < 2; k++) nk[i][j][k] = 0;
		}
	}
}

void calall() {
	int i, j;

	nk[1][0][0] = 1;
	nk[1][0][1] = 1;
	for (i = 2; i <= 100; i++) {
		nk[i][0][0] = nk[i - 1][0][0] + nk[i - 1][0][1];
		nk[i][0][1] = nk[i - 1][0][0];
		for (j = 1; j < i; j++) {
			nk[i][j][0] = nk[i - 1][j][0] + nk[i - 1][j][1];
			nk[i][j][1] = nk[i - 1][j][0] + nk[i - 1][j - 1][1];
		}
	}
}

int main() {

	int i, T, n, k;

	scanf("%d", &T);
	init();
	calall();
	for (i = 0; i < T; i++) {
		scanf("%d %d", &n, &k);
		printf("%d\n", nk[n][k][0] + nk[n][k][1]);
	}

	return 0;
}