/* BOJ - 5032번 탄산 음료 문제 */

#include <stdio.h>

int e, f, c, t, res;

void getinfo() {
	scanf("%d %d %d", &e, &f, &c);
	t = e + f;
	res = 0;
}

void cal() {
	int tmp;
	while (t >= c) {
		tmp = t / c;
		t = t % c;
		res += tmp;
		t += tmp;
	}
	printf("%d\n", res);
}

int main() {
	getinfo();
	cal();
	return 0;
}