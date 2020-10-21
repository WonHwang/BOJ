/* BOJ - 1463�� 1�� ����� ���� �ٽ�Ǯ�� */

#include <stdio.h>

int DP[1000001];

// �ʱ�ȭ �Լ�
void init() {
	for (int i = 0; i < 1000001; i++) DP[i] = 0;
}

// ��� �Լ�
void cal() {
	int div_3, div_2, min_1, i, min;

	for (i = 2; i < 1000001; i++) {
		min_1 = DP[i - 1] + 1;
		if (i % 2 == 0) div_2 = DP[i / 2] + 1;
		else div_2 = min_1 + 1;
		if (i % 3 == 0) div_3 = DP[i / 3] + 1;
		else div_3 = min_1 + 1;

		min = min_1;
		if (min > div_2) min = div_2;
		if (min > div_3) min = div_3;
		DP[i] = min;
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	init();
	cal();
	printf("%d\n", DP[N]);
	return 0;
}