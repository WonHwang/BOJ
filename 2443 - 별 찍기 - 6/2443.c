/* BOJ - 2443�� �� ��� - 6 ���� */

#include <stdio.h>

int main() {

	int N, i, j;
	
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= i - 1; j++) printf(" ");
		for (j = i; j <= 2*N-i; j++) printf("*");
		printf("\n");
	}
}