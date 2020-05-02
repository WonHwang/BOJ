/* acmicpc.net - 2579번 계단 오르기 */

#include <stdio.h>

int step[301];
int DP[301];

void init(int N)
{
	int i;

	for (i=0; i<301; i++){
		step[i] = 0;
		DP[i] = 0;
	}

	for (i=1; i<=N; i++) scanf("%d", &step[i]);
}

int max(int a, int b)
{
	int max;

	max = a;
	if (max<b) max = b;

	return max;
}

void cal(int N)
{
	int i, l1, l2;

	DP[1] = step[1];
	DP[2] = step[1]+step[2];

	for (i=3; i<N; i++) DP[i] = max(DP[i-3] + step[i-1] + step[i], DP[i-2] + step[i]);

	l1 = DP[N-3] + step[N-1] + step[N];
	l2 = DP[N-2] + step[N];

	DP[N] = l1;
	if (l2>l1) DP[N] = l2;

}

int main()
{
	int N;
	scanf("%d", &N);
	init(N);
	cal(N);

	printf("%d\n", DP[N]);
	
	return 0;
}