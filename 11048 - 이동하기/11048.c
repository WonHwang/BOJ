/* acmicpc.net - 11048�� �̵��ϱ� ���� */

#include <stdio.h>

int ar[1000][1000], DP[1000][1000], N, M;

void init() {
	// �迭 �ʱ�ȭ �Լ�
	int i, j;

	for (i = 0; i < 1000; i++) {
		for (j = 0; j < 1000; j++) {
			ar[i][j] = 0;
			DP[i][j] = 0;
		}
	}
}

void getint() {
	// ���� �� ���� �Լ�
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) scanf("%d", &ar[i][j]);
	}
}

int threemax(int a, int b, int c) {
	// �� �� �� �ִ밪 ����

	int tmp;
	tmp = a;
	if (b > tmp && b > c) tmp = b;
	else if (c > tmp && c > b) tmp = c;

	return tmp;
}

void calDP() {
	// DP�迭 ��� �Լ�

	int i, j;

	DP[0][0] = ar[0][0]; // DP�迭�� 0��0�� ��Ҵ� ar�迭�� ����
	
	for (i = 1; i < N; i++) DP[i][0] = DP[i - 1][0] + ar[i][0];
	for (i = 1; i < M; i++) DP[0][i] = DP[0][i - 1] + ar[0][i]; // ù ����, �������� �� �� ����� �հ� ����

	for (i = 1; i < N; i++) {
		for (j = 1; j < M; j++) DP[i][j] = threemax(DP[i - 1][j], DP[i][j - 1], DP[i - 1][j - 1]) + ar[i][j]; // ��, �� �Ǵ� �࿭ �ϳ� �� ����� �ִ밪 + ���簪
	}
}

void printall() {
	// Ǯ�� ���� �� �迭 Ȯ�ο� �Լ�
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", ar[i][j]);
		printf("\n");
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", DP[i][j]);
		printf("\n");
	}
}

int main() {

	init();
	getint();
	calDP();
	printf("%d\n", DP[N-1][M-1]);
	return 0;
}