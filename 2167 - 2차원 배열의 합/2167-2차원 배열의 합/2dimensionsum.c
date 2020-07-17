/* acmicpc.net - 2167번 2차원 배열의 합 문제 */

#include <stdio.h>

int D[301][301];

void init()
{
	int i, j;

	for (i=0; i<301; i++){
		for (j=0; j<301; j++){
			D[i][j] = 0;
		}
	}
}

void getinfo()
{
	int M, N, i, j;

	scanf("%d %d", &M, &N);
	
	for (i=1; i<=M; i++){
		for (j=1; j<=N; j++) scanf("%d", &D[i][j]);
	}

}

void makeres()
{
	int T, i ,j ,x, y, k, a, b, sum;

	init();
	getinfo();

	scanf("%d", &T);

	for (k=0; k<T; k++){
		sum = 0;
		scanf("%d %d %d %d", &i, &j, &x, &y);

		for (a=i; a<=x; a++){
			for (b=j; b<=y; b++) sum+=D[a][b];
		}

		printf("%d\n", sum);
	}
}



int main()
{
	makeres();

	return 0;
}