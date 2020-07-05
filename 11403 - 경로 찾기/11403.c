/* BOJ - 11403번 경로 찾기 문제 */

#include <stdio.h>

int node[101][101], visit[101][101], N;

void init() {
	N = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			node[i][j] = 0;
			visit[i][j] = 0;
		}
	}
}

void getinfo() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) scanf("%d", &node[i][j]);
	}
}

void cal(int i, int j) {
	if (visit[i][j] == 1) return;
	visit[i][j] = 1;
	for (int k = 1; k <= N; k++) {
		if (node[j][k] == 1) {
			node[i][k] = 1;
			cal(i, k);
		}
	}
}

void printres() {
	init();
	getinfo();
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (node[i][j] == 1) cal(i, j);
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) printf("%d ", visit[i][j]);
		printf("\n");
	}
}

int main() {
	printres();
	return 0;
}