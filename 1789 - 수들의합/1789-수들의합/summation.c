/* BOJ - 1789�� ������ �� */

#include <stdio.h>
long long int N;

long long int cal() {
	long long int i;
	long long int K;
	scanf("%lld", &N);

	for (i = 0; i < 100000000; i++) {
		K = i * (i + 1) / 2;
		if (N - K <= i) break;
	}

	return i;
}

int main()
{
	printf("%lld\n", cal());

	return 0;
}