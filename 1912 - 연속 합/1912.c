/* acmicpc.net - 1912�� ������ ���� */

#include <stdio.h>

int ar[100000], dp[100000];

void init() {
	// �ʱ�ȭ �Լ�

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
	} // i��° dp�� ���ؼ� ���������� ���� �ִ�� ������ ���� �׳� i��° ar��� ��ü �� ū���� ���Ѵ�.

	for (max = dp[0], i = 1; i < N; i++) {
		if (max < dp[i]) max = dp[i];
	}

	printf("%d\n", max);

	return 0;
}