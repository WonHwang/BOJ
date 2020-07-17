/* acmicpc.net - 1699�� �������� �� */

#include <stdio.h>
#include <math.h>

int DP[100001];

void init() {
	
	int i;
	for (i = 0; i < 100001; i++) DP[i] = i;
}

int min(int a, int b) {
	// ���� �� ��ȯ

	if (a < b) return a;
	else return b;
}

void calDP() {
	// ���� ������ DP �׾Ƴ�����

	int i, j, k;

	for (i = 2; i < (int)sqrt(100001); i++) {
		k = i * i;
		for (j = k; j < 100001; j++) DP[j] = min(1 + DP[j - k], DP[j]);
	}
}

int main() {
	int N;
	init();
	calDP();
	scanf("%d", &N);
	printf("%d\n", DP[N]);
	return 0;
}