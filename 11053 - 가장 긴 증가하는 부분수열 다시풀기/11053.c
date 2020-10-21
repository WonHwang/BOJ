/* BOJ - 11053�� ���� �� �����ϴ� �κм��� ���� �ٽ�Ǯ�� */

#include <stdio.h>

int arr[1001], DP[1001], N;

// �ʱ�ȭ �Լ�
void init() {
	N = 0;
	for (int i = 0; i < 1001; i++) {
		arr[i] = 0;
		DP[i] = 0;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
}

// ��� �Լ�
void cal() {
	int i, j;
	DP[0] = 1;
	for (i = 1; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] > arr[j] && DP[j] >= DP[i] + 1) DP[i] = DP[j];
		}
		DP[i]++;
	}
}

// �ִ밪 ���
void printmax() {
	int i, max;
	max = DP[0];
	for (i = 1; i < N; i++) if (max < DP[i]) max = DP[i];
	printf("%d\n", max);
}

// ���� �Լ�
int main() {
	init();
	cal();
	printmax();
	return 0;
}