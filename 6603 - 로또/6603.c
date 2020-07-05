/* BOJ - 6603번 로또 문제 */

#include <stdio.h>

int lotto[14], N, chosen[7];

void init() {
	N = 0;
	for (int i = 0; i < 14; i++) lotto[i] = 0;
	for (int i = 0; i < 7; i++) chosen[i] = 0;
}

void getinfo(int N) {
	for (int i = 1; i <= N; i++) scanf("%d", &lotto[i]);
}

void printres() {
	for (int i = 1; i < 7; i++) printf("%d ", chosen[i]);
	printf("\n");
}

void cal(int len, int point) {
	if (len == 7) {
		printres();
		return;
	}
	if (point > N) return;

	if (len < 7) {
		chosen[len] = lotto[point];
		cal(len + 1, point + 1);
		cal(len, point + 1);
	}
}

int main() {
	while (1) {
		scanf("%d", &N);
		if (N == 0) break;
		getinfo(N);
		cal(1, 1);
		printf("\n");
	}
	return 0;
}