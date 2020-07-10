/* BOJ - 10709번 기상캐스터 문제 */

#include <stdio.h>
#include <string.h>

int H, W;
char M[100][100];
void init() {
	scanf("%d %d", &H, &W);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) M[i][j] = '0';
	}
	for (int i = 0; i < H; i++) scanf("%s", &M[i]);
}

void printres() {
	int i, j, tmp;

	for (i = 0; i < H; i++) {
		for (tmp = -1, j = 0; j < W; j++) {
			if (M[i][j] == 'c') {
				tmp = 0;
				printf("%d ", tmp);
			}
			else if (M[i][j] == '.' && tmp != -1) printf("%d ", ++tmp);
			else if (tmp == -1) printf("%d ", tmp);
		}
		printf("\n");
	}
}

int main() {
	init();
	printres();
	return 0;
}