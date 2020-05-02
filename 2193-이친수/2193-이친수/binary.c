/* acmicpc.net - 2193번 이친수 */

#include <stdio.h>

long long int DP[91];

void cal(int N)
{
	int i;

	for (i=0; i<91; i++) DP[i] = 0;

	DP[1] = 1;
	DP[2] = 1;

	for (i=3; i<=N; i++) DP[i] = DP[i-1] + DP[i-2];
}

int main()
{
	int N;

	scanf("%d", &N);

	cal(N);

	printf("%lld\n", DP[N]);

	return 0;
}