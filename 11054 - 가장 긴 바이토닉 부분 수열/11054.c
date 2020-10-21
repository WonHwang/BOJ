/* BOJ - 11054�� ���� �� ������� �κ� ���� ���� */

#include <stdio.h>

int arr[1001], incre[1001], decre[1001], N;

// �ʱ�ȭ �Լ�
void init() {
	N = 0;
	for (int i = 0; i < 1001; i++) {
		arr[i] = 0;
		incre[i] = 0;
		decre[i] = 0;
	}
	// �Է�
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
}

// ��� �Լ�
void cal() {
	int i, j;
	incre[0] = 1;
	decre[N - 1] = 1;
	for (i = 1; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] > arr[j] && incre[j] >= incre[i] + 1) incre[i] = incre[j];
		}
		incre[i]++;
	}
	for (i = N - 2; i > -1; i--) {
		for (j = N - 1; j > i; j--) {
			if (arr[i] > arr[j] && decre[j] >= decre[i] + 1) decre[i] = decre[j];
		}
		decre[i]++;
	}
}

// �ִ밪 ��� �Լ�
void printmax() {
	int i, max;
	max = 0;
	for (i = 0; i < N; i++) if (max < (incre[i] + decre[i])) max = incre[i] + decre[i];
	printf("%d\n", max-1);
}

// ���� �Լ�
int main() {
	init();
	cal();
	printmax();
	return 0;
}