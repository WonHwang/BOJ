/* acmicpc.net - 2156번 포도주 마시기 */

#include <stdio.h>

int wine[10001];
int DP[10001];

void initset(int N)
{
	int i;

	for (i=0; i<10001; i++){
		wine[i] = 0;
		DP[i] = 0;
	}

	for (i=1; i<=N; i++) scanf("%d", &wine[i]);
}

int max(int a, int b, int c)
{
	int max;
	max = a;
	if (max<b) max = b;
	if (max<c) max = c;

	return max;
}

void cal(int N)
{
	int i;


	DP[1] = wine[1];
	DP[2] = wine[1] + wine[2];

	for (i=3; i<=N; i++) DP[i] = max(DP[i-3] + wine[i-1] + wine[i] , DP[i-2] + wine[i] , DP[i-1]);

}

int main()
{
	int N;

	scanf("%d", &N);
	initset(N);
	cal(N);

	printf("%d\n", DP[N]);

	return 0;
}