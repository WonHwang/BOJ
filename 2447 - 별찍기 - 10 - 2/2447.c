/* BOJ - 2447번 별 찍기 - 10 문제 2번 풀이 */

#include <stdio.h>

char ar[2188][2188];
int N;

void init() {
	int i, j;

	for (i = 0; i < 2188; i++) {
		for (j = 0; j < 2188; j++) ar[i][j] = '*';
	}
}

void makefrac(int n) {

	int i, j, tmp;

	if (n != 1) {
		for (i = (n / 3) + 1; i <= 2 * n / 3; i++) {
			for (j = (n / 3) + 1; j <= 2 * n / 3; j++) ar[i][j] = ' ';
		}
	}


}