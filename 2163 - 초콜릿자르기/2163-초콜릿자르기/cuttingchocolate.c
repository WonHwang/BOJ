/* acmicpc.net - 2163번 초콜릿 자르기 */

#include <stdio.h>

int DP[301][301];

void initDP()
{
	int i, j;

	for (i=0; i<301; i++){
		for (j=0; j<301; j++) DP[i][j] = 0;
	}

	for (i=2; i<301; i++){
		DP[i][1] = i-1;
		DP[1][i] = i-1;
	}
}

void cutting(int N, int M)
{
	int i, j;

	initDP();

	for (i=2; i<=N; i++){
		for (j=2; j<=M; j++){
			DP[i][j] = 1 + DP[i][j-1] + DP[i][1];
		}
	}
}

int main()
{
	int N, M;

	scanf("%d %d", &N, &M);
	
	cutting(N,M);

	printf("%d\n", DP[N][M]);

	return 0;
}