/* BOJ - 11729�� �ϳ��� ž �̵� ���� ���� */

#include <stdio.h>

int N;

void init() {
	scanf("%d", &N);
}

void howmany() {
	int i, res;
	for (res = 0, i = 1; i <= N; i++) res = (2 * res) + 1;
	printf("%d\n", res);
}

void hanoi(int n, int a, int b, int c) {
	if (n == 1) {
		printf("%d %d\n", a, c);
		return;
	}
	hanoi(n - 1, a, c, b);
	printf("%d %d\n", a, c);
	hanoi(n - 1, b, a, c);
}

int main() {
	init();
	howmany();
	hanoi(N, 1, 2, 3);
	return 0;
}