/* BOJ - 10991번 별 찍기 - 16 문제 */

#include <stdio.h>

int N;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= N + i; j++) {
			if (N % 2 == 1) {
				if (j < N - i) printf(" ");
				else if ((i + j) % 2 == 0) printf(" ");
				else printf("*");
			}
			else {
				if (j < N - i) printf(" ");
				else if ((i + j) % 2 == 1) printf(" ");
				else printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}