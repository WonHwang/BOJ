/* BOJ - 2552번 문제 별 찍기 - 12*/

#include <stdio.h>

int N;

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = N; j >= 1; j--) {
			if (j <= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for (int i = N-1; i >= 1; i--) {
		for (int j = N; j >= 1; j--) {
			if (j <= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}