/* acmicpc.net - 9084번 동전 문제 */

#include <stdio.h>

int c[10001], M[10001], Mo; // 동전 가짓수의 최대값은 10000개, 금액의 상한은 10000원

void init() {
	// 초기화 함수

	int i;

	for (i = 0; i < 10001; i++) {
		c[i] = 0;
		M[i] = 0;
	}

}

void getcoin() {

	int i, N, tmp;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &tmp);
		c[tmp]++;
	}

	scanf("%d", &Mo);
}

void makeres() {

	int i, j;

	for (i = 0; i <= Mo; i++) {
		if (c[i] != 0) {
			for (j = 1; j <= Mo; j++) {
				if (j - i >= 0) M[j] = M[j-i]+;
			}
		}
	}

	printf("%d\n", M[Mo]);
}

int main() {

	int i, T;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		init();
		getcoin();
		makeres();
	}

	return 0;
}
