/* BOJ - 2583번 영역 구하기 문제 */

#include <stdio.h>

int M, N, K, wide[101][101], checked[101][101], area[10001], num, hocul;

void init() {
	int i, j;
	hocul = 1;
	M = 0;
	N = 0;
	K = 0;
	num = 0;
	for (i = 0; i < 101; i++) {
		for (j = 0; j < 101; j++) {
			wide[i][j] = 0;
			checked[i][j] = 0;
		}
	}
	for (i = 0; i < 10001; i++) area[i] = 0;
}

void getinfo() {
	int i, j, k, x1, y1, x2, y2;
	scanf("%d %d %d", &M, &N, &K);
	for (k = 0; k < K; k++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = x1; i < x2; i++) {
			for (j = y1; j < y2; j++) wide[i][j] = 1;
		}
	}
}

void resprint() {
	int i, j;
	printf("\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", wide[i][j]);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", checked[i][j]);
		printf("\n");
	}
}

void cal(int i, int j){
	if (i == N || j == M || i == -1 || j == -1 || checked[i][j] == 1) return;
	if (wide[i][j] == 0 && checked[i][j] == 0) {
		checked[i][j] = 1;
		num++;
		cal(i + 1, j);
		cal(i, j + 1);
		cal(i - 1, j);
		cal(i, j - 1);
	}
	else {
		checked[i][j] = 1;
		return;
	}
}

void sort() {
	int i, j, tmp, many;
	for (i = 0, many = 0; i < 10001; i++) if (area[i] != 0) many++;
	printf("%d\n", many);
	for (i = 0; i < 10001; i++) {
		for (j = 0; j < 10001 - i - 1; j++) {
			if (area[i] > area[i + 1]) {
				tmp = area[i];
				area[i] = area[i + 1];
				area[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 10001; i++) if (area[i] != 0) printf("%d ", area[i]);
	printf("\n");
}

void res() {
	int i, j, check;
	init();
	getinfo();
	for (i = 0, check = 1; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (checked[i][j] == 1) continue;
			else if (wide[i][j] == 0 && checked[i][j] == 0) {
				cal(i, j);
				area[check++] = num;
				num = 0;
			}
		}
	}
	sort();
}

int main() {
	res();
	resprint();
	return 0;
}