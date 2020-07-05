/* BOJ - 1712번 손익분기점 문제 */

#include <stdio.h>

int check(int A, int B, int C) {

	int tmp, tmp2;

	if (B == C) return 0;
	tmp = A + B - C;
	if (tmp < 0) return 1;
	tmp2 = A + B + B - C - C;
	if (tmp < tmp2) return 0;
	return 1;

}

int main() {

	int A, B, C, i;

	scanf("%d %d %d", &A, &B, &C);
	if (!check(A, B, C)) {
		printf("-1\n");
		return 0;
	}
	i = A / (C - B);
	i++;
	printf("%d\n", i);
	return 0;
}