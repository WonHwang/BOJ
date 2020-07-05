/* BOJ - 2743번 단어 길이 재기 문제 */

#include <stdio.h>
#include <string.h>

char str[102];

void init() {
	for (int i = 0; i < 102; i++) str[i] = '0';
}

void getinfo() {
	scanf("%s", &str);
}

void cal() {
	int res, i;

	for (res = 0, i = 0; str[i] != '0'; i++) res++;

	printf("%d\n", res-1);
}

int main() {
	init();
	getinfo();
	cal();

	return 0;
}