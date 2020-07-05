/* BOJ - 1620번 나는야 포켓몬 마스터 문제 */

#include <stdio.h>
#include <string.h>

struct dex {
	int num;
	char name[21];
};

int N, M;
struct dex d[100001];

void init() {
	for (int i = 0; i < 100001; i++) {
		d[i].num = i;
	}
}

void getinfo() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		scanf("%s", &d[i].name);
	}
}

int issame(char a[], char b[]) {
	int end, i;
	for (i = 0, end = 0; a[i] != '\n'; i++) end++;
	for (i = 0; i < end; i++) {
		if (a[i] != b[i]) return 0;
	}
	return 1;
}

void answer() {
	int num;
	char name1[21], name2[21];

	for (int i = 1; i <= M; i++) {
		scanf("%s", &name2);
		/*
		if (name2[0] >= '0' && name2[0] <= '9') {
			printf("name\n");
		}
		else {
			printf("num\n");
			for (int j = 1; j <= N; j++) {
				if (d[j].name == name2) printf("%d\n", d[j].num);
			}
		}*/
	}
}

int main() {
	init();
	getinfo();
	answer();
}