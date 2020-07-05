/* BOJ - 10448번 유레카 이론 */

#include <stdio.h>

int tri[51], K;

void init() {
	tri[0] = 0;
	for (int i = 1; i < 51; i++) tri[i] = tri[i - 1] + i;
	K = 0;
}

void cal() {
	int i, j, k, tmp;
	scanf("%d", &K);

	for (i = 1; i < 51; i++) {
		for (j = 1; j < 51; j++) {
			for (k = 1; k < 51; k++) {
				tmp = tri[i] + tri[j] + tri[k];
				if (tmp == K) {
					printf("1\n");
					return;
				}
				else if (tmp > K) break;
			}
		}
	}
	printf("0\n");
}

int main() {

	int i, T;
	scanf("%d", &T);
	init();
	for (i = 0; i < T; i++) cal();

	return 0;
}