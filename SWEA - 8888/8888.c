/* SWEA - 8888번 시험 문제 */

#include <stdio.h>

int N, T, P, sc[2001][2001], score[2001];

void init() {

	int i, j;

	N = 0;
	T = 0;
	P = 0;
	for (i = 0; i < 2001; i++) {
		score[i] = 0;
		for (j = 0; j < 2001; j++) sc[i][j] = 0;
	}
}


int main() {
	int i, j, k, Tc;

	scanf("%d", &Tc);

	for (i = 0; i < Tc; i++) {
		scanf("%d %d %d", &N, &T, &P);
		for (j = 1; j <= N; j++) {
			for (k = 1; k <= T; k++) scanf("%d", &sc[j][k]);
		}
		for (j = 1; j <= N; j++) {
			// 이어 풀자
		}
	}
}