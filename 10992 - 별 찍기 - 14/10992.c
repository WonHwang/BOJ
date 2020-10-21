/* BOJ - 10992번 별 찍기 - 14 문제 */

#include <stdio.h>

int N;

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= N + i; j++) {
			if (i == N - 1) printf("*");
			else if (j == N - i || j == N + i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}