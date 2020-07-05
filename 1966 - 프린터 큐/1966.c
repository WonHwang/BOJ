/* BOJ - 1966번 프린터 큐 문제 */

#pragma warning (disable : 4996)
#include <stdio.h>

int queue[100], depth[100], N, M, cnt, printed;

void init() {

	int i;

	for (i = 0; i < 100; i++) {
		queue[i] = 0;
		depth[i] = 0;
	}
	N = 0;
	M = 0;
	cnt = 0;
	printed = 0;
}

int check() {

	int i;

	for (i = 1; i < N; i++) {
		if (queue[i] > queue[0]) return 1;
	}

	return 0;
}

void range() {
	
	int j, tmp;
	
	if (check()){
		if (M == 0) M = N-1;
		else M = M-1;
		tmp = queue[0];
		for (j = 0; j < N - 1; j++) queue[j] = queue[j + 1];
		queue[N - 1] = tmp;
	}
	else {
		if (M == 0) {
			printf("%d\n", ++cnt);
			printed = 1;
			return;
		}
		else {
			N = N - 1;
			M = M - 1;
			cnt++;
			for (j = 0; j < N; j++) queue[j] = queue[j + 1];
			queue[N] = 0;
		}
	}
}

int main() {

	int T, i, j;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		init();
		scanf("%d %d", &N, &M);
		for (j = 0; j < N; j++) scanf("%d", &queue[j]);
		while (!printed) range();
	}

	return 0;

}