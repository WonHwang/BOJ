/* BOJ - 1874번 스택 수열 문제 */

#include <stdio.h>

int st[100001], ar[100001], N, top, point;
char pm[200002];

void init() {

	int i;

	for (i = 0; i < 100001; i++) {
		st[i] = -1;
		ar[i] = -1;
	}

	for (i = 0; i < 200002; i++) pm[i] = '0';
	top = 0;
	N = 0;
	point = 0;
}

void getint() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &ar[i]);
}

int isempty() {
	
	int i, res;
	res = 1;
	for (i = 0; i < N; i++) if (st[i] != -1) res = 0;

	return res;
}

void printres() {

	int i;

	if (isempty() == 1) {
		for (i = 0; pm[i] != '0'; i++) printf("%c\n", pm[i]);
	}
	else printf("NO\n");
}

void cal() {

	int i, k;

	i = 1;
	k = 0;
	for (i=1; i<=N; i++){
		st[top++] = i;
		pm[k++] = '+';
		while (1) {
			if (st[top - 1] == ar[point]) {
				st[top - 1] = -1;
				top--;
				point++;
				pm[k++] = '-';
			}
			else {
				break;
			}
		}
	}
	printres();
}

int main() {

	init();
	getint();
	cal();

	return 0;

}