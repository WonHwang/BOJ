/* acmicpc.net - 1010번 다리놓기 문제 */

#include <stdio.h>

int C[31][31];

void init(){
	int i, j;

	for (i=0; i<31; i++){
		for (j=0; j<31; j++) C[i][j] = 0;
	}

	for (i=0; i<31; i++){
		C[i][0] = 1;
		C[i][1] = i;
		C[i][i] = 1;
	}
}

void combi(){
	int i, j;

	init();
	for (i=3; i<31; i++){
		for (j=2; j<i; j++) C[i][j] = C[i-1][j-1] + C[i-1][j];
	}
}

void makeres(){
	int i, N, m, n;

	combi();
	scanf("%d", &N);
	for (i=0; i<N; i++){
		scanf("%d %d", &n, &m);
		printf("%d\n", C[m][n]);
	}
}

int main(){
	makeres();
	return 0;
}