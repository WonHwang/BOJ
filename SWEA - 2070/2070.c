/* SWEA - 2070�� ū��, ������, ������ ���� */

#include <stdio.h>

int main() {

	int i, A, B, T;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);

		if (A > B) printf("#%d >\n", i + 1);
		else if (A < B) printf("#%d <\n", i + 1);
		else printf("#%d =\n", i+1);
	}

	return 0;
}