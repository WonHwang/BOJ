/* BOJ - 1436번 영화감독 숌 문제 */

#include <stdio.h>

int triple(int n) {
	int cont;

	cont = 0;
	while (n != 0) {
		if (cont == 3) break;
		if (n % 10 == 6) cont++;
		else cont = 0;
		n /= 10;
	}
	if (cont == 3) return 1;
	else return 0;
}

void cal() {

	int i, N, n;

	scanf("%d", &N);
	i = 666;
	n = 0;
	while (1) {
		if (triple(i)) n++;
		if (n == N) break;
		i++;
	}
	printf("%d\n", i);
}

int main() {
	cal();
	return 0;
}