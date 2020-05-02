/* acmicpc.net - 11052번 카드 구매하기 */

#include <stdio.h>

int card[1001];
int cost[1001];

int getcase()
{
	int n, i;

	for (i=0; i<1001; i++) card[i] = 0;

	scanf("%d", &n);

	for (i=1; i<=n; i++) scanf("%d", &card[i]);

	return n;
}

int calcost()
{
	int i;

