/* acmicpc.net - 5576�� ���׽�Ʈ ���� */

#include <stdio.h>

int W[10], K[10], Wsum, Ksum;

void init() { // �ʱ�ȭ

	int i;

	for (i = 0; i < 10; i++) {
		W[i] = 0;
		K[i] = 0;
	}
}

void getint() { // �Է�

	int i;

	for (i = 0; i < 10; i++) scanf("%d", &W[i]);
	for (i = 0; i < 10; i++) scanf("%d", &K[i]);

}

void findsum() { // �ִ밪 ã�Ƽ� ���ϰ� �� �ڸ��� 0���� ����� �۾� 3ȸ �ݺ�

	int i, j, Wmax, Kmax;

	for (Wsum = 0, i = 0; i < 3; i++) {
		Wmax = W[0];

		for (j = 1; j < 10; j++) {
			if (Wmax <= W[j]) Wmax = W[j];
		}

		for (j = 0; j < 10; j++) {
			if (Wmax == W[j]) {
				Wsum += Wmax;
				W[j] = 0;
				break;
			}
		}
	}

	for (Ksum = 0, i = 0; i < 3; i++) {
		Kmax = K[0];

		for (j = 1; j < 10; j++) {
			if (Kmax <= K[j]) Kmax = K[j];
		}

		for (j = 0; j < 10; j++) {
			if (Kmax == K[j]) {
				Ksum += Kmax;
				K[j] = 0;
				break;
			}
		}
	}

}

int main() {

	init();
	getint();
	findsum();
	printf("%d %d\n", Wsum, Ksum);

	return 0;
}