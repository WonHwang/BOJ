/* acmicpc.net - 11722번 가장 긴 감소하는 부분수열 */

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

int makelen(int i)
{
	int j, max;

	max = 0;
	for (j=i-1; j>=1; j--){
		if (max<DP[j] && len[i]<len[j]) max = DP[j];
	}

	max += 1;

	return max;
}

void checking(int N)
{
	int i;

	DP[1] = 1;

	for (i=2; i<=N; i++) DP[i] = makelen(i);
}

int findmax(int N)
{
	int i, max;

	max = 0;
	for (i=1; i<=N; i++) if(max<DP[i]) max = DP[i];

	return max;
}

int main()
{
	int N;

	scanf("%d", &N);

	setting(N);

	checking(N);

	printf("%d\n", findmax(N));

	return 0;
}