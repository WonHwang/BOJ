/* BOJ - 5618번 공약수 문제 */

#include <stdio.h>

int A, B, C, n;

int main() {
	int max, i;
	scanf("%d", &n);
	if (n == 2) scanf("%d %d", &A, &B);
	else scanf("%d %d %d", &A, &B, &C);
	if (n == 2) {
		if (A > B) max = A;
		else max = B;
		for (i = 1; i <= max; i++) if (A%i == 0 && B%i == 0) printf("%d\n", i);
	}
	else {
		max = A;
		if (B > A) max = B;
		if (C > A) max = C;
		for (i = 1; i <= max; i++) if (A%i == 0 && B%i == 0 && C%i == 0) printf("%d\n", i);
	}
	return 0;
}