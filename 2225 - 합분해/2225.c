/* BOJ - 2225번 합분해 문제 */

#include <stdio.h>

int DP[201][201], N, K;

// 초기화 함수
void init() {
	for (int i = 0; i < 201; i++) {
		for (int j = 0; j < 201; j++) DP[i][j] = 0;
	}
}

// 입력, 계산, 출력 함수
void calandprint() {
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) DP[i][1] = 1;
	for (int i = 1; i <= K; i++) DP[1][i] = i;
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= K; j++) DP[i][j] = (DP[i - 1][j] + DP[i][j - 1]) % 1000000000;
	}
	printf("%d\n", DP[N][K]);
}

int main() {
	init();
	calandprint();
	return 0;
}