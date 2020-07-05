/* BOJ - 3085번 사탕 게임 문제 */

#include <stdio.h>
#include <string.h>
int N;
char b[51][51], c[51][51];

void init() {
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			b[i][j] = '0';
			c[i][j] = '0';
		}
	}
	N = 0;
}

void getinfo() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%s", &b[i]);
}

void copy() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) c[i][j] = b[i][j];
	}
	
}

int findmax() {

	int i, j, max, tmp;

	max = 0;
	for (i = 0; i < N; i++) {
		tmp = 1;
		for (j = 0; j < N - 1; j++) {
			if (c[i][j] == c[i][j + 1]) tmp++;
			else if (c[i][j] != c[i][j + 1] && tmp > max) {
				max = tmp;
				tmp = 1;
			}
			else tmp = 1;
		}
		if (tmp > max) max = tmp;
	}

	for (j = 0; j < N; j++) {
		tmp = 1;
		for (i = 0; i < N - 1; i++) {
			if (c[i][j] == c[i + 1][j]) tmp++;
			else if (c[i][j] != c[i + 1][j] && tmp > max) {
				max = tmp;
				tmp = 1;
			}
			else tmp = 1;
		}
		if (tmp > max) max = tmp;
	}

	return max;
}

int getmax(int a, int b) {

	char tmp;
	int max, tmp2;

	max = 0;
	
	if (a == 0 && b == 0) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (a == N - 1 && b == N - 1) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (a == 0 && b != 0 && b != N - 1) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (a == N-1 && b != 0 && b != N - 1) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (b == 0 && a != 0 && a != N - 1) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (b == N - 1 && a != 0 && a != N - 1) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (b == N - 1 && a == 0 ) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else if (a == N - 1 && b == 0) {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	else {
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b - 1];
		c[a][b - 1] = tmp;
		tmp2 = findmax();
		copy();
		tmp = c[a][b];
		c[a][b] = c[a][b + 1];
		c[a][b + 1] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a + 1][b];
		c[a + 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
		copy();
		tmp = c[a][b];
		c[a][b] = c[a - 1][b];
		c[a - 1][b] = tmp;
		tmp2 = findmax();
		if (tmp2 > max) max = tmp2;
	}

	return max;
}

void cal() {
	int i, j, max, tmp;

	init();
	getinfo();

	max = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			tmp = getmax(i, j);
			if (tmp > max) max = tmp;
		}
	}

	printf("%d\n", max);
}

int main() {

	cal();

	return 0;
}