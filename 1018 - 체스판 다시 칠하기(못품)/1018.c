/* BOJ - 1018번 체스판 다시 칠하기 문제 */

#include <stdio.h>

int N, M;
char board[51][51];

void init() {

	int i, j;

	for (i = 0; i < 51; i++) {
		for (j = 0; j < 51; j++) board[i][j] = '0';
	}
	N = 0;
	M = 0;
}

void getinfo() {

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) scanf("%c", &board[i][j]);
	}
}

int check88(int a, int b) {

	int i, j;

}

int findmin() {

	int i, j, min, tmp;


	min = 64;

	for (i = 1; i <= N - 7; i++) {
		for (j = 1; j <= M - 7; j++) {

		}
	}
}