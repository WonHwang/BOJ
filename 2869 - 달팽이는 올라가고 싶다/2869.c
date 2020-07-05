/* BOJ - 2869번 달팽이는 올라가고 싶다 문제 */

#include <stdio.h>

int A, B, V;

void getinfo() {
	scanf("%d %d %d", &A, &B, &V);
}

void cal() {
	int res, len;

	getinfo();

	if (A == V) res = 1;

	len = (V - A) / (A - B);
	len = len - 3;
	while (1) {
		if (((A - B)*len) + A >= V) {
			len++;
			break;
		}
		len++;
	}
	printf("%d\n", len);
}

int main() {
	cal();
	return 0;
}