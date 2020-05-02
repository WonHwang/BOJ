/* SWEA - 9317번 석찬이의 받아쓰기 문제 */

#include <stdio.h>
#include <string.h>

char pro[100000], res[100000];

void init() {
	int i;

	for (i = 0; i < 100000; i++) {
		pro[i] = '0';
		res[i] = '0';
	}
}

int main() {

	int T, N, i, j, num;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%s", &pro);
		scanf("%s", &res);
		for (num = 0, j = 0; j < N; j++) {
			if (pro[j] == res[j]) num++;
		}

		printf("#%d %d\n", i + 1, num);
	}

	return 0;
}