/* BOJ - 2011�� ��ȣ�ڵ� ���� */

#include <stdio.h>

int arr1[5001], arr2[5001], dp[5001], N, length;

// �迭 �ʱ�ȭ, �Է� ���� ���ϱ�
void init() {
	for (int i = 0; i < 5001; i++) {
		arr1[i] = 0;
		arr2[i] = 0;
		dp[i] = 0;
	}
	scanf("%d", &N);

	length = 0;

	// arr1�� �������� ����ȴ�.
	while (N != 0) {
		arr1[length++] = N % 10;
		N /= 10;
	}
	// arr2�� �ٽ� ���� ������� ����
	for (int i = length - 1; i >= 0; i--) arr2[length - i - 1] = arr1[i];
}

// ��� �Լ�
int cal() {
	int i;
	if (arr2[0] == 0) return 0;
	if (length == 1) return 1;
	else dp[0] = 1;
	if (arr2[1] == 0 && )
}

// ���� �Լ�
int main() {
	init();
	printf("%d\n", cal());
	for (int i = 0; i < length; i++) printf("%d ", arr2[i]);
	return 0;
}