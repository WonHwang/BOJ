/* BOJ - 9465�� ��ƼĿ ���� */

#include <stdio.h>

int sticker[2][100000], DP[2][100000], N;

// �ʱ�ȭ �Լ�
void initialize() {
	N = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 100000; j++) {
			sticker[i][j] = 0;
			DP[i][j] = 0;
		}
	}
}

// ��ƼĿ�� �Է� �Լ�
void getinfomation() {
	scanf("%d", &N);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < N; j++) scanf("%d", &sticker[i][j]);
	}
}

// ��� �Լ�
void calulation() {
	int i, j, max;

	DP[0][0] = sticker[0][0];
	DP[1][0] = sticker[1][0];
	DP[0][1] = DP[1][0] + sticker[0][1];
	DP[1][1] = DP[0][0] + sticker[1][1];
	for (j = 2; j < N; j++) {
		for (i = 0; i < 2; i++) {
			if (i == 0) {
				max = DP[1][j - 1];
				if (DP[1][j - 2] > max) max = DP[1][j - 2];
				DP[i][j] = max + sticker[i][j];
			}
			else {
				max = DP[0][j - 1];
				if (DP[0][j - 2] > max) max = DP[0][j - 2];
				DP[i][j] = max + sticker[i][j];
			}
		}
	}
}

// ��� �Լ�
void printresult() {
	int i, j, max;
	max = DP[0][N - 2];
	for (i = 0; i < 2; i++) {
		for (j = N - 2; j < N; j++) {
			if (DP[i][j] > max) max = DP[i][j];
		}
	}
	printf("%d\n", max);
}

// ���� �Լ�
int main() {
	int i, T;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		initialize();
		getinfomation();
		calulation();
		printresult();
	}
	return 0;
}