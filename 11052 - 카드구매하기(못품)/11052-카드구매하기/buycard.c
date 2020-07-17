/* acmicpc.net - 11052번 카드 구매하기 */

#include <stdio.h>

int card[1001], cost[1001], N;

void init() {

	int i;

	for (i = 0; i < 1001; i++) {
		card[i] = 0;
		cost[i] = 0;
	}

	N = 0;
}

void getint() {

	int i;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) scanf("%d", &card[i]);
}

void cal() {

	int i, j, tmp;
	cost[1] = card[1];
	for (i = 2; i <= N; i++) {
		tmp = card[1];
		for (j=1; j<=i; j++) 
	}
}