/* BOJ - 2503번 숫자 야구 문제 */

#include <stdio.h>

int b[1000];

void init() {
	int i, j, k, tmp;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < 10; k++) {
				if (i == 0 || j == 0 || k == 0) b[100 * i + 10 * j + k] = 0;
				if (i == j || i == k || j == k) b[100 * i + 10 * j + k] = 0;
				else b[100 * i + 10 * j + k] = 1;
			}
		}
	}
}

void cal() {
	int num, s, b, a, b, c, i;
	scanf("%d %d %d", &num, &s, &b);
	c = num % 10;
	b = (num / 10) % 10;
	a = num / 100;
	for (i = 123; i < 987; i++) {

	}
}