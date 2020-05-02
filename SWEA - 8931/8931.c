/* SWEA - 8931번 제로 문제 */

#include <stdio.h>

int st[100000], pointer;

void init() {
	int i;
	for (i = 0; i < 100000; i++) st[i] = 0;
	pointer = 0;
}

int sum() {
	int i, sum;

	for (sum = 0, i = 0; i < pointer; i++) sum += st[i];

	return sum;
}

int main() {

	int i, j, T, K, tmp;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		init();
		scanf("%d", &K);
		for (j = 0; j < K; j++) {
			scanf("%d", &tmp);
			if (tmp == 0) {
				pointer--;
				st[pointer] = 0;
			}
			else st[pointer++] = tmp;
		}

		printf("#%d %d\n", i + 1, sum());
	}

	return 0;
}