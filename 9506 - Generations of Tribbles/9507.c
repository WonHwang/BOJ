/* acmicpc.net - 9507번 Generations of Tibbles 문제 */

#include <stdio.h>

long long int fib[68];

void init() {
	// 배열 초기화 함수

	int i;

	for (i = 0; i < 68; i++) fib[i] = 0;

}

void koong() {
	// 배열 계산 함수

	int i;
	fib[0] = 1;
	fib[1] = 1;
	fib[2] = 2;
	fib[3] = 4;
	for (i = 4; i < 68; i++) fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
}

int main() {
	
	int N, tmp;

	scanf("%d", &N);

	init();
	koong();

	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		printf("%lld\n", fib[tmp]);
	}

	return 0;
}