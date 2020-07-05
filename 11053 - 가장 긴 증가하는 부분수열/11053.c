/* acmicpc.net - 11053번 가장 긴 증가하는 부분수열 문제 */

#include <stdio.h>

int ar[1000], dp[1000],  N;

void init() {

	int i;

	for (i = 0; i < 1000; i++) {
		ar[i] = 0;
		dp[i] = 1;
	}
	N = 0;
}

void getint() {

	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &ar[i]);

}

void cal() {

	int i, j, tmp;

	for (i = 1; i < N; i++) {
		for (tmp = 1, j = 0; j < i; j++) {
			if (ar[i] > ar[j] && dp[j]>=tmp) {
				dp[i] = dp[j] + 1;
				tmp = dp[i];
			}
		}
	}	
}

int max() {

	int i, max;

	for (max = dp[0], i = 1; i < N; i++) {
		if (dp[i] > max) max = dp[i];
	}

	return max;
}

int main() {

	init();
	getint();
	cal();
	printf("%d\n", max());
	return 0;

}