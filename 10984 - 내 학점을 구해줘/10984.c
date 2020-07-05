/* BOJ - 10984번 내 학점을 구해줘 문제 */

#include <stdio.h>

int T, N, C[10];
double G[10];

void init() {

	int i;

	for (i = 0; i < 10; i++) {
		C[i] = 0;
		G[i] = 0;
	}
	N = 0;
}

void cal() {
	int i, max;
	double avg;

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d %lf", &C[i], &G[i]);
	max = 0;
	avg = 0;
	for (i = 0; i < N; i++) {
		max += C[i];
		avg += (C[i] * G[i]);
	}

	avg = avg / max;

	printf("%d %0.1f\n", max, avg);
}

int main() {
	int i;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		init();
		cal();
	}

	return 0;

}