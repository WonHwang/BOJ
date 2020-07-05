/* acmicpc.net - 10844번 쉬운 계단 수 문제 */

#include <stdio.h>

long long int DP[101][10];

void init() {
	
	int i, j;

	for (i = 0; i < 101; i++) {
		for (j = 0; j < 10; j++) DP[i][j] = 0;
	}
}

void cal() {

	int i, j;

	for (i = 1; i < 10; i++) DP[1][i] = 1;

	for (i = 2; i < 101; i++) {
		DP[i][0] = DP[i - 1][1] % 1000000000;
		for (j = 1; j < 9; j++) DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % 1000000000;
		DP[i][9] = DP[i - 1][8] % 1000000000;
	}
}

int main() {

	int N, i;
	long long int sum;

	scanf("%d", &N);

	init();
	cal();

	sum = 0;
	for (i = 0; i < 10; i++) {
		sum += DP[N][i];
		sum = sum % 1000000000;
	}

	printf("%lld\n", sum);

	return 0;
	
}