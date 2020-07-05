/* BOJ - 8320번 직사각형을 만드는 방법 */

#include <stdio.h>
#include <math.h>

int arr[10001], N;

int howmanydiv(int n) {
	int i, tmp, res;

	tmp = (int) sqrt(n);

	for (res = 0, i = 1; i <= tmp; i++) {
		if (n % i == 0) res++;
	}
	return res;
}

void cal() {
	int i;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (i = 3; i < 10001; i++) {
		arr[i] = arr[i - 1] + howmanydiv(i);
	}
}

int main() {
	cal();
	scanf("%d", &N);
	printf("%d\n", arr[N]);
	return 0;
}