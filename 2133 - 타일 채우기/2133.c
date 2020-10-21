/* BOJ - 2133번 타일 채우기 문제 */

#include <stdio.h>

int N, DP[31];

// 초기화 및 입력 함수
void init() {
	for (int i = 0; i < 31; i++) DP[i] = 0;
	scanf("%d", &N);
}

// 계산 함수
void cal() {
	DP[0] = 1;
	DP[2] = 3;
	for (int i = 4; i <= N; i++) {
		if (i % 2 == 1) continue;
		DP[i] = 3 * DP[i - 2];
		for (int j = 0; j < i - 2; j++) {
			if (j % 2 == 1) continue;
			DP[i] += 2 * DP[j];
		}
	}
	printf("%d\n", DP[N]);
}

// 메인 함수
int main() {
	init();
	cal();
	return 0;
}