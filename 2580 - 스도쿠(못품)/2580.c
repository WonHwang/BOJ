/* BOJ - 2580번 스도쿠 문제 */

#include <stdio.h>

int sudoku[10][10], isfull[4][4], onetonine[10];

void init2() {
	for (int i = 0; i < 10; i++) onetonine[i] = 0;
}

void init() {
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) sudoku[i][j] = 0;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) isfull[i][j] = 0;
	}
	init2();
}

void getinfo() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) scanf("%d", &sudoku[i][j]);
	}
}

int checkonetonine() {
	for (int i = 1; i <= 9; i++) if (onetonine[i] == 0) return 0;
	return 1;
}

int checksquare(int x, int y) {
	for (int i = 3 * (x - 1); i <= 3 * x; i++) {
		for (int j = 3 * (y - 1); j <= 3 * y; j++) onetonine[sudoku[i][j]] = 1;
	}
	if (checkonetonine()) return 1;
	else return 0;
}

