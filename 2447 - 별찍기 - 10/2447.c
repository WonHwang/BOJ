/* BOJ - 2447¹ø º° Âï±â - 10 */

#include <stdio.h>

int main() {
	int N, i, j, k, tmp;


	scanf("%d", &N);

	tmp = N;
	k = 0;
	while (1) {
		tmp = tmp / 3;
		k++;
		if (tmp == 1) break;
	}

	tmp = 3;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (i % 3 > 3 / 3 && i % 3 <= 2 * 3 / 3 && j % 3 > 3 / 3 && j % 3 <= 2 * 3 / 3) printf(" ");
			else if (i % 9 > 9 / 3 && i % 9 <= 2 * 9 / 3 && j % 9 > 9 / 3 && j % 9 <= 2 * 9 / 3) printf(" ");
			else if (i % 27 > 27 / 3 && i % 27 <= 2 * 27 / 3 && j % 27 > 27 / 3 && j % 27 <= 2 * 27 / 3) printf(" ");
			else if (i % 81 > 81 / 3 && i % 81 <= 2 * 81 / 3 && j % 81 > 81 / 3 && j % 81 <= 2 * 81 / 3) printf(" ");
			else if (i % 243 > 243 / 3 && i % 243 <= 2 * 243 / 3 && j % 243 > 243 / 3 && j % 243 <= 2 * 243 / 3) printf(" ");
			else if (i % 729 > 729 / 3 && i % 729 <= 2 * 729 / 3 && j % 729 > 729 / 3 && j % 729 <= 2 * 729 / 3) printf(" ");
			else if (i % 2187 > 2187 / 3 && i % 2187 <= 2 * 2187 / 3 && j % 2187 > 2187 / 3 && j % 2187 <= 2 * 2187 / 3) printf(" ");
			else printf("*");

		}
		printf("\n");
	}

	return 0;

}