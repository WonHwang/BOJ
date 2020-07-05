/* SWEA - 9940번 순열1 문제 */

#include <stdio.h>

int ar[100001], ch[100001], N;

void init() {

	int i;

	for (i = 0; i < 100001; i++) {
		ar[i] = 0;
		ch[i] = 0;
	}

	N = 0;
}

void getinfo() {

	int i;

	init();

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &ar[i]);

	for (i = 1; i <= N; i++) ch[i] = 1;

}

int check() {

	int i;

	for (i = 0; i < N; i++) {
		if (ch[ar[i]] == 1) ch[ar[i]] = 0;
		else return 0;
	}

	for (i = 1; i <= N; i++) {
		if (ch[i] != 0) return 0;
	}

	return 1;
}

int main() {

	int i, T;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		getinfo();
		if (check()) printf("#%d Yes\n", i + 1);
		else printf("#%d No\n", i + 1);
	}

	return 0;
}