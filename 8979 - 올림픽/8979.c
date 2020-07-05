/* BOJ - 8979번 올림픽 문제 */

#include <stdio.h>

int con[1000], gol[1000], sil[1000], bro[1000];

void init() {
	int i;

	for (i = 0; i < 1000; i++) {
		con[i] = 0;
		gol[i] = 0;
		sil[i] = 0;
		bro[i] = 0;
	}
}

void cal() {
	int i, N, K, tmp, rank;

	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) scanf("%d %d %d %d", &con[i], &gol[i], &sil[i], &bro[i]);
	for (i = 0; i < N; i++) if (con[i] == K) tmp = i;
	for (rank = 1, i = 0; i < N; i++) {
		if (gol[i] > gol[tmp] || (gol[i] == gol[tmp] && sil[i] > sil[tmp]) || (gol[i] == gol[tmp] && sil[i] == sil[tmp] && bro[i] > bro[tmp])) rank++;
	}

	printf("%d\n", rank);
}

int main() {
	init();
	cal();

	return 0;
}