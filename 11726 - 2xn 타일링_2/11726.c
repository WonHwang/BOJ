/* BOJ - 11726�� 2xn Ÿ�ϸ� ���� �ٽ�Ǯ�� */

#include <stdio.h>

int DP[1001];

// �ʱ�ȭ�Լ�
void init() {
	for (int i = 0; i < 1001; i++) DP[i] = 0;
}

// ����Լ�
void cal() {
	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i < 1001; i++) DP[i] = (DP[i - 2] + DP[i-1]) % 10007;
}

int main() {
	int N;
	scanf("%d", &N);
	init();
	cal();
	printf("%d\n", DP[N]);
	return 0;
}