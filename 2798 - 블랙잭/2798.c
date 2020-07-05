/* BOJ - 2798번 블랙잭 문제 */

#include <stdio.h>

int card[100], N, M;

void init() {

	int i;

	for (i = 0; i < 100; i++) card[i] = 0;
	N = 0;
	M = 0;

}

void getcard() {

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) scanf("%d", &card[i]);
}

int getmax() {

	int i, j, k, max, tmp;

	max = 0;

	for (i = 0; i < N - 2; i++) {
		for (j = i + 1; j < N - 1; j++) {
			for (k = j + 1; k < N; k++) {
				tmp = card[i] + card[j] + card[k];
				if (max < tmp && tmp <= M) max = tmp;
			}
		}
	}

	return max;
}

int main() {

	init();
	getcard();
	printf("%d\n", getmax());

	return 0;

}