/* acmicpc.net - 1699번 제곱수의 합 */

#include <stdio.h>
#include <math.h>

int DP[10001];

void init()
{
	int i;

	for (i=0; i<10001; i++) DP[i];
}

void cal(int N)
{
	int i, root2, res1, res2;
	double root;

	res1 = N;
	res2 = N;

	root = sqrt((double) N);
	root2 = (int) root;
	res1 -= (root2 * root2);
	res2 -= ((root2 - 1)*(root2 - 1));
	printf("%d %d\n", res1, res2);
	if (res1==0) DP[N] = 1;
	else{
		res1 = DP[res1];
		res2 = DP[res2];
		printf("%d %d\n", res1, res2);
		if (res1>res2) DP[N] = res2+1;
		else DP[N] = res1 + 1;
	}
}

void calcul(int N)
{
	int i;

	init();

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 3;

	for (i=4; i<=N; i++) cal(i);
}

int main()
{
	int N;

	scanf("%d", &N);

	calcul(N);
	printf("%d\n", DP[N]);

	return 0;
}