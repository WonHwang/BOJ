/* BOJ - 5533번 유니크 문제 */

#include <stdio.h>

int N, player[200][3], score[200];

void init() {
	N = 0;
	for (int i = 0; i < 200; i++) {
		score[i] = 0;
		for (int j = 0; j < 3; j++) player[200][j] = 0;
	}
}

void getinfo() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) scanf("%d", &player[i][j]);
	}
}

int issame(int n, int j) {
	for (int i = 0; i < N; i++) {
		if (i == n) continue;
		if (player[i][j] == player[n][j]) return 0;
	}
	return 1;
}

void cal() {
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < 3; j++) {
			if (issame(i, j)) score[i] += player[i][j];
		}
	}

	for (i = 0; i < N; i++) printf("%d\n", score[i]);
}

int main() {
	init();
	getinfo();
	cal();
	return 0;
}