/* SWEA - 1859번 백만장자 프로젝트 문제 */

#include <stdio.h>

int price[1000001], point[1000001];
long long int sum;

void init() {
	// 초기화 함수

	for (int i = 0; i < 1000001; i++) {
		price[i] = 0;
		point[i] = 0;
	}
	sum = 0;
}

void findmax(int N) {
	int i, max;
	max = price[0];
	for (i = 1; i < N; i++) if (price[i] > max) max = price[i];
	for (i = 0; i < N; i++) if (price[i] == max) point[i] = 1;
}

int maxindex(int N) {
	int i;
	for (i = 0; i < N; i++) if (point[i] == 1) return i;
	return 0;
}

void getandcal() {

	int i, N, tmp, num, index;

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &price[i]);
	
	while (1) {
		findmax(N);
		tmp = maxindex(N);
		if (!tmp) {
			point[tmp] = -1;
			break;
		}
	}
}

int main() {

	int i, T;

	scanf("%d", &T);

	for (i = 1; i <= T; i++) {
		init();
	}

	return 0;
}