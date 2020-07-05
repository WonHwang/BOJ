/* BOJ - 2851번 슈퍼 마리오 문제 */

#include <stdio.h>

int score[10];

void init() {
	for (int i = 0; i < 10; i++) score[i] = 0;
}

void getinfo() {
	for (int i = 0; i < 10; i++) scanf("%d", &score[i]);
}

int who(int a, int b) {
	int A, B;
	if (a >= 100) A = a - 100;
	else A = 100 - a;
	if (b >= 100) B = b - 100;
	else B = 100 - b;
	if (B > A) return a;
	else return b;
}

void cal() {
	int i, sum, res;
	for (sum = 0, i = 0; i < 10; i++) {
		if (sum + score[i] > 100) {
			res = who(sum, sum + score[i]);
			break;
		}
		sum += score[i];
	}

	printf("%d\n", res);
}

int main() {
	init();
	getinfo();
	cal();

	return 0;
}