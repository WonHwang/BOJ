/* BOJ - 2011번 암호코드 문제 */

#include <stdio.h>

int arr1[5001], arr2[5001], dp[5001], N, length;

// 배열 초기화, 입력 길이 구하기
void init() {
	for (int i = 0; i < 5001; i++) {
		arr1[i] = 0;
		arr2[i] = 0;
		dp[i] = 0;
	}
	scanf("%d", &N);

	length = 0;

	// arr1에 역순으로 저장된다.
	while (N != 0) {
		arr1[length++] = N % 10;
		N /= 10;
	}
	// arr2에 다시 원래 순서대로 저장
	for (int i = length - 1; i >= 0; i--) arr2[length - i - 1] = arr1[i];
}

// 계산 함수
int cal() {
	int i;
	if (arr2[0] == 0) return 0;
	if (length == 1) return 1;
	else dp[0] = 1;
	if (arr2[1] == 0 && )
}

// 메인 함수
int main() {
	init();
	printf("%d\n", cal());
	for (int i = 0; i < length; i++) printf("%d ", arr2[i]);
	return 0;
}