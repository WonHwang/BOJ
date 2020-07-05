/* BOJ - 2231번 분해합 문제 */

#include <stdio.h>

int returndiv(int N) {

	int tmp;

	tmp = N;

	while (1) {
		N += tmp % 10;
		tmp = tmp / 10;
		if (tmp == 0) break;
	}

	return N;

}

int main() {

	int N, i;

	scanf("%d", &N);
	for (i = 1; i < N; i++) {
		if (returndiv(i) == N) {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("0\n");

	return 0;

}