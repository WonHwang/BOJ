/* acmicpc.net - 1912번 연속합 문제 */

#include <stdio.h>

int ar[100000], dp[100000];

void init() {
	// 초기화 함수

	int i;

	for (i = 0; i < 100000; i++) {
		ar[i] = 0;
		dp[i] = 0;
	}
}

int main() {

	int N, i, max;

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &ar[i]);

	dp[0] = ar[0];
	for (i = 1; i < N; i++) {
		if (dp[i - 1] + ar[i] > ar[i]) dp[i] = dp[i - 1] + ar[i];
		else dp[i] = ar[i];
	} // i번째 dp에 대해서 이전까지의 합의 최대와 합했을 때와 그냥 i번째 ar요소 자체 중 큰것을 택한다.

	for (max = dp[0], i = 1; i < N; i++) {
		if (max < dp[i]) max = dp[i];
	}

	printf("%d\n", max);

	return 0;
}