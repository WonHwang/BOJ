/* BOJ - 9663¹ø N-Queen ¹®Á¦ */

#include <stdio.h>

int N, chess[15][15], res, point[15][3];

void init() {
	scanf("%d", &N);
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) chess[i][j] = 0;
	}
	res = 0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 3; j++) point[i][j] = 0;
	}
}

int isattackable(int d){
	int i, xdis, ydis;
	for (i = 1; i < d; i++) {
		xdis = point[d][1] - point[i][1];
		ydis = point[d][2] - point[i][2];
		if (xdis < 0) xdis = 0 - xdis;
		if (ydis < 0) ydis = 0 - ydis;
		if (point[d][2] == point[i][2] || xdis == ydis) return 1;
	}
	return 0;
}

void cal(int d) {
	
	int i;
	if (d > N) return;
	for (i = 1; i <= N; i++) {
		chess[d][i] = 1;
		point[d][1] = d;
		point[d][2] = i;
		if (isattackable(d)) continue;
		if (d == N) {
			if (!isattackable(d)) res++;
		}
		cal(d + 1);
	}
}

int main() {
	init();
	cal(1);
	printf("%d\n", res);
	return 0;
}