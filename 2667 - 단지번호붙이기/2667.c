/* BOJ - 2667번 단지번호붙이기 문제 */

#include <stdio.h>
#include <string.h>

char house[25][25], copy[25][25];
int N, many[626], num;

void init() {
	int i, j;
	for (i = 0; i < 25; i++) {
		for (j = 0; j < 25; j++) {
			house[i][j] = '0';
			copy[i][j] = 0;
		}
	}
	for (i = 0; i < 626; i++) many[i] = 0;
	N = 0;
	num = 0;
}

void getinfo() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%s", &house[i]);
}

void cal(int i, int j) {
	if (i == N || j == N || i == -1 || j == -1 || copy[i][j] == 1) return;
	if (house[i][j] == '1' && copy[i][j] == 0) {
		copy[i][j] = 1;
		num++;
		cal(i + 1, j);
		cal(i - 1, j);
		cal(i, j + 1);
		cal(i, j - 1);
	}
}

void sort() {
	int i, j, tmp, howmany;
	for (i = 0; i < 626; i++) {
		for (j = 0; j < 626 - i - 1; j++) {
			if (many[j] > many[j + 1]) {
				tmp = many[j + 1];
				many[j + 1] = many[j];
				many[j] = tmp;
			}
		}
	}
	for (i = 0, howmany = 0; i < 626; i++) if (many[i] != 0) howmany++;
	printf("%d\n", howmany);
	for (i = 0; i < 626; i++) if (many[i] != 0) printf("%d\n", many[i]);
}

void printres() {
	int i, address;
	for (i = 0, address = 1; i < N*N; i++) {
		num = 0;
		if (house[i / N][i % N] == '1' && copy[i / N][i % N] == 0) {
			cal(i / N, i % N);
			many[address++] = num;
		}
	}
	sort();
}

int main() {
	init();
	getinfo();
	printres();
	return 0;
}