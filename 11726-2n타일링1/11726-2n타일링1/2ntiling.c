/* acmicpc.net - 11726번 2*n 타일링1 */

#include <stdio.h>

int tile[1001];

void caltile()
{
	int i;

	for (i=0; i<1001; i++) tile[i] = 0;

	tile[1] = 1;
	tile[2] = 2;

	for (i=3; i<1001; i++) tile[i] = (tile[i-1] + tile[i-2]) % 10007;

}

int main()
{
	int n;

	scanf("%d", &n);

	caltile();

	printf("%d\n", tile[n]);

	return 0;
}