/* acmicpc.net 11727번 2xn 타일링 2 */

#include <stdio.h>

int tile[1001];

void caltile()
{
	int i;

	for (i=0; i<1001; i++) tile[i] = 0;

	tile[1] = 1;
	tile[2] = 3;

	for (i=3; i<1001; i++) tile[i] = (tile[i-1] + 2*tile[i-2]) % 10007;
}

int main()
{
	int n;

	caltile();

	scanf("%d", &n);

	printf("%d\n", tile[n]);

	return 0;
}