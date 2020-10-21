/* BOJ - 11054번 가장 긴 바이토닉 부분 수열 문제 */

#include <stdio.h>

int arr[1001], incre[1001], decre[1001], N;

// 초기화 함수
void init() {
	N = 0;
	for (int i = 0; i < 1001; i++) {
		arr[i] = 0;
		incre[i] = 0;
		decre[i] = 0;
	}
	// 입력
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
}

// 계산 함수
void cal() {
	int i, j;
	incre[0] = 1;
	decre[N - 1] = 1;
	for (i = 1; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] > arr[j] && incre[j] >= incre[i] + 1) incre[i] = incre[j];
		}
		incre[i]++;
	}
	for (i = N - 2; i > -1; i--) {
		for (j = N - 1; j > i; j--) {
			if (arr[i] > arr[j] && decre[j] >= decre[i] + 1) decre[i] = decre[j];
		}
		decre[i]++;
	}
}

// 최대값 출력 함수
void printmax() {
	int i, max;
	max = 0;
	for (i = 0; i < N; i++) if (max < (incre[i] + decre[i])) max = incre[i] + decre[i];
	printf("%d\n", max-1);
}

// 메인 함수
int main() {
	init();
	cal();
	printmax();
	return 0;
}