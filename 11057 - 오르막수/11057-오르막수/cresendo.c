/* acmicpc.net - 11057번 오르막수 */

#include <stdio.h>

int len[1001][11];

void init()
{
	int i, j;

	for (i=0; i<1001; i++){
		for (j=0; j<11; j++) len[i][j] = 0;
	}
}

void cal(int N)
{
	int i, j;

	for (i=1; i<=10; i++) len[1][i] = i;

	for (i=1; i<1001; i++) len[i][1] = 1;

	for (i=2; i<=N; i++){
		for (j=2; j<=10; j++) len[i][j] = (len[i-1][j] + len[i][j-1]) % 10007;
	}

}

int main()
{
	int N;

	scanf("%d", &N);
	init();
	cal(N);

	printf("%d\n", len[N][10]);

	return 0;
}