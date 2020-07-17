/* BOJ - 2442번 별 찍기 - 5 문제 */

#include <stdio.h>

int main() {

	int N, i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - i; j++) printf(" ");
		for (j = N - i+1; j < N + i; j++) printf("*");
		printf("\n");
	}

	return 0;

}