/* acmicpc.net - 1912번 연속합 */

#include <stdio.h>

int seq[100001];
int DP[100001];

void init(int N)
{
	int i;

	for (i=0; i<100001; i++){
		seq[i] = 0;
		DP[i] = 0;
	}

	for (i=1; i<=N; i++) scanf("%d", &seq[i]);
}

