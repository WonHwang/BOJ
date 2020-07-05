/* acmicpc.net - 9507�� Generations of Tibbles ���� */

#include <stdio.h>

long long int fib[68];

void init() {
	// �迭 �ʱ�ȭ �Լ�

	int i;

	for (i = 0; i < 68; i++) fib[i] = 0;

}

void koong() {
	// �迭 ��� �Լ�

	int i;
	fib[0] = 1;
	fib[1] = 1;
	fib[2] = 2;
	fib[3] = 4;
	for (i = 4; i < 68; i++) fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
}

int main() {
	
	int N, tmp;

	scanf("%d", &N);

	init();
	koong();

	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		printf("%lld\n", fib[tmp]);
	}

	return 0;
}