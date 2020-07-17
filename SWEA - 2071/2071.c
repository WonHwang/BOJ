/* SWEA - 2071번 평균값 구하기 문제 */

#include <stdio.h>

int main() {

	int T, i, j, a[10], sum;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		for (j = 0; j < 10; j++) scanf("%d", &a[j]);
		sum = 0;
		for (j = 0; j < 10; j++) sum += a[j];
		if (sum % 10 >= 5) sum = sum/10 + 1;
		else sum = sum / 10;
		printf("#%d %d\n", i + 1, sum);
	}

	return 0;
}