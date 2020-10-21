/* acmicpc.net - 1463번 1로 만들기 */

#include <stdio.h>

int DP[1000001];

int findmin(int a, int b, int c)
{
	int min;

	min = a;
	if (min > b) min = b;
	if (min > c) min = c;

	return min;
}

void initDP()
{
	int i;

	for (i=0; i<1000001; i++) DP[i] = 0;
}

void calDP(int N)
{
	int a, b, c, i;

	initDP();

	DP[1] = 0;
	DP[2] = 1;
	DP[3] = 1;

	for (i=4; i<=N; i++){
		if (i%3 == 0) c = 1 + DP[i/3];
		else c = -1;
		if (i%2 == 0) b = 1 + DP[i/2];
		else b = -1;
		a = 1 + DP[i-1];

		if (b == -1) b = a+1;
		if (c == -1) c = a+1;

		DP[i] = findmin(a, b, c);

	}
}