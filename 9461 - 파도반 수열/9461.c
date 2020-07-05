/* BOJ - 9461번 파도반 수열 문제 */

#include <stdio.h>

long long int ar[101];

void init() {

	int i;

	for (i = 0; i < 101; i++) ar[i] = 0;

}

void cal() {

	ar[0] = 1;
	ar[1] = 1;
	ar[2] = 1;
	ar[3] = 2;
	ar[4] = 2;

	for (int i = 5; i < 101; i++) ar[i] = ar[i - 1] + ar[i - 5];
}

int main() {
	int T, N, i;
	init();
	cal();
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%lld\n", ar[N - 1]);
	}

	return 0;
}