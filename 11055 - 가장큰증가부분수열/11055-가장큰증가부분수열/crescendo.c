/* acmicpc.net - 11055번 가장 큰 증가 부분수열 */

#include <stdio.h>

int len[1001];
int DP[1001];

void init()
{
	int i;

	for (i=0; i<1001; i++){
		len[i] = 0;
		DP[i] = 0;
	}
}

void setting(int N)
{
	int i;

	init();

	for (i=1; i<=N; i++) scanf("%d", &len[i]);
}

int maxi(int a, int b)
{
	int max;
	max = a;
	if (max<b) max = b;
	return max;
}

int checking(int N)
{
	int i, max, sum;

	max = 0;

	for (i=N; i>=1; i--){
		if (len[N]>len[i]){
			max = maxi(DP[i], max);
		}
	}

	sum = len[N] + max;

	return sum;
}

void cal(int N)
{
	int i, j;

	DP[1] = len[1];

	for (i=2; i<=N; i++) DP[i] = checking(i);

}

int findmax(int N)
{
	int i, max;

	max = DP[1];
	for (i=2; i<=N; i++) if (DP[i]>max) max = DP[i];

	return max;
}

int main()
{
	int N;
	scanf("%d", &N);
	setting(N);
	cal(N);
	printf("%d\n", findmax(N));
	return 0;
}