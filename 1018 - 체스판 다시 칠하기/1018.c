/* BOJ - 1018번 체스판 다시 칠하기 문제 */

#include <stdio.h>
#include <string.h>

int N, M;
char board[51][51], board2[8][8], board3[8][8];

void init() {

	int i, j;

	for (i = 0; i < 51; i++) {
		for (j = 0; j < 51; j++) board[i][j] = '0';
	}
	N = 0;
	M = 0;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				board2[i][j] = 'B';
				board3[i][j] = 'W';
			}
			else if ((i+j) % 2 == 1){
				board2[i][j] = 'W';
				board3[i][j] = 'B';
			}
		}
	}
}

void getinfo() {

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%s", &board[i]);
	}
}

int check88(int a, int b) {
	int i, j, tmp, tmp2;

	for (tmp = 0, i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) if (board[a + i][b + j] != board2[i][j]) tmp++;
	}
	for (tmp2 = 0, i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) if (board[a + i][b + j] != board3[i][j]) tmp2++;
	}
	if (tmp < tmp2) return tmp;
	else return tmp2;
}

int findmin() {

	int i, j, min, tmp;


	min = 64;
	for (i = 0; i <= N - 8; i++) {
		for (j = 0; j <= M - 8; j++) {
			tmp = check88(i, j);
			if (min > tmp) min = tmp;
		}
	}

	return min;
}

int main() {
	init();
	getinfo();
	printf("%d\n", findmin());
	return 0;
}