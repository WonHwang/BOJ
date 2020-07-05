/* BOJ - 1564번 팩토리얼5 문제 */

#include <stdio.h>

long long int fac[1000001];

long long int removezero(long long int N) {
	while (N % 10 == 0) {
		N = N / 10;
	}
	return N;
}

void cal() {
	int i;
	fac[0] = 0;
	fac[1] = 1;
	for (i = 2; i < 1000001; i++) {
		fac[i] = removezero(fac[i - 1] * i) % 1000000000000;
	}
	for (i = 2; i < 1000001; i++) fac[i] = fac[i] % 100000;
}

void checkdigit(long long int N) {
	int i, digit;
	digit = 0;
	while (N != 0) {
		N /= 10;
		digit++;
	}
	for (i = 5; i > digit; i--) printf("0");
}

void res() {
	int N;
	cal();
	scanf("%d", &N);
	checkdigit(fac[N]);
	printf("%lld\n", fac[N]);
}

int main() {
	res();
	return 0;
}