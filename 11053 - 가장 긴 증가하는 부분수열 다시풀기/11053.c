/* BOJ - 11053번 가장 긴 증가하는 부분수열 문제 다시풀기 */

#include <stdio.h>

int arr[1001], DP[1001], N;

// 초기화 함수
void init() {
	N = 0;
	for (int i = 0; i < 1001; i++) {
		arr[i] = 0;
		DP[i] = 0;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
}

// 계산 함수
void cal() {
	int i, j;
	DP[0] = 1;
	for (i = 1; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] > arr[j] && DP[j] >= DP[i] + 1) DP[i] = DP[j];
		}
		DP[i]++;
	}
}

// 최대값 출력
void printmax() {
	int i, max;
	max = DP[0];
	for (i = 1; i < N; i++) if (max < DP[i]) max = DP[i];
	printf("%d\n", max);
}

// 메인 함수
int main() {
	init();
	cal();
	printmax();
	return 0;
}