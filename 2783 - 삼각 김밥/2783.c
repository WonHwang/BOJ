/* BOJ - 2783¹ø »ï°¢ ±è¹ä ¹®Á¦ */

#include <stdio.h>

double gram[101];
double price[101];
double res[101];
int N;

void init() {
	scanf("%lf %lf", &price[0], &gram[0]);
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)scanf("%lf %lf", &price[i], &gram[i]);
}

void cal() {
	double min;
	for (int i = 0; i <= N; i++) res[i] = price[i] * 1000 / gram[i];
	min = res[0];
	for (int i = 1; i <= N; i++) if (min > res[i]) min = res[i];
	printf("%.2f\n", min);
}

int main() {
	init();
	cal();
	return 0;
}