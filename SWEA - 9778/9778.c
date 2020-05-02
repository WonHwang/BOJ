/* SWEA - 9778번 카드 게임 문제 */

#include <stdio.h>

int card[12];

void init() {
	int i;
	card[0] = 0;
	card[1] = 0;
	for (i = 2; i < 12; i++) card[i] = 4;
	card[10] = 16;
}

int rescard() {
	int i, sum;
	sum = 0;
	for (i = 2; i < 12; i++) sum += card[i];
	return sum;
}

int main() {
	int T, N, i, j,  sum, tmp;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		init();
		scanf("%d", &N);
		for (sum = 0, j = 0; j < N; j++) {
			scanf("%d", &tmp);
			card[tmp]--;
			sum += tmp;
		}
		tmp = 21 - sum;
		for (sum = 0, j = 2; j <= tmp; j++) sum += card[j];
		if (sum > (rescard()-sum)) printf("#%d GAZUA\n", i + 1);
		else printf("#%d STOP\n", i + 1);
	}

	return 0;
}