/* BOJ - 11650번 좌표 정렬하기 문제 */

#include <stdio.h>

int point[2001][2001], N;

void init() {
	int i, j;
	for (i = 0; i < 2001; i++) {
		for (j = 0; j < 2001; j++) point[i][j] = 0;
	}
}

void getinfo() {
	int i, x, y;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		if (x < 0) x = 2000 - x;
		if (y < 0) y = 2000 - y;
		point[x][y]++;
	}
}