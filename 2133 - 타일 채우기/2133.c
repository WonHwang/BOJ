/* BOJ - 2133�� Ÿ�� ä��� ���� */

#include <stdio.h>

int N, DP[31];

// �ʱ�ȭ �� �Է� �Լ�
void init() {
	for (int i = 0; i < 31; i++) DP[i] = 0;
	scanf("%d", &N);
}

// ��� �Լ�
void cal() {
	DP[0] = 1;
	DP[2] = 3;
	for (int i = 4; i <= N; i++) {
		if (i % 2 == 1) continue;
		DP[i] = 3 * DP[i - 2];
		for (int j = 0; j < i - 2; j++) {
			if (j % 2 == 1) continue;
			DP[i] += 2 * DP[j];
		}
	}
	printf("%d\n", DP[N]);
}

// ���� �Լ�
int main() {
	init();
	cal();
	return 0;
}