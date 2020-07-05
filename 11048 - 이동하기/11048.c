/* acmicpc.net - 11048번 이동하기 문제 */

#include <stdio.h>

int ar[1000][1000], DP[1000][1000], N, M;

void init() {
	// 배열 초기화 함수
	int i, j;

	for (i = 0; i < 1000; i++) {
		for (j = 0; j < 1000; j++) {
			ar[i][j] = 0;
			DP[i][j] = 0;
		}
	}
}

void getint() {
	// 조건 값 설정 함수
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) scanf("%d", &ar[i][j]);
	}
}

int threemax(int a, int b, int c) {
	// 세 수 중 최대값 리턴

	int tmp;
	tmp = a;
	if (b > tmp && b > c) tmp = b;
	else if (c > tmp && c > b) tmp = c;

	return tmp;
}

void calDP() {
	// DP배열 계산 함수

	int i, j;

	DP[0][0] = ar[0][0]; // DP배열의 0행0열 요소는 ar배열과 같음
	
	for (i = 1; i < N; i++) DP[i][0] = DP[i - 1][0] + ar[i][0];
	for (i = 1; i < M; i++) DP[0][i] = DP[0][i - 1] + ar[0][i]; // 첫 가로, 세로줄은 그 전 요소의 합과 같음

	for (i = 1; i < N; i++) {
		for (j = 1; j < M; j++) DP[i][j] = threemax(DP[i - 1][j], DP[i][j - 1], DP[i - 1][j - 1]) + ar[i][j]; // 행, 열 또는 행열 하나 전 요소의 최대값 + 현재값
	}
}

void printall() {
	// 풀이 과정 상 배열 확인용 함수
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", ar[i][j]);
		printf("\n");
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) printf("%d ", DP[i][j]);
		printf("\n");
	}
}

int main() {

	init();
	getint();
	calDP();
	printf("%d\n", DP[N-1][M-1]);
	return 0;
}