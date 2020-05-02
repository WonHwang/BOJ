/* acmicpc.net-5543 상근날드 */

#include <stdio.h>

int getprice(int a[])
{
	int i;
	for (i=0; i<5; i++) scanf("%d", &a[i]);
	return *a;
}

int findmin(int a[])
{
	int bm, dm, min;

	bm = a[0];
	if (a[1]<bm) bm = a[1];
	if (a[2]<bm) bm = a[2];
	dm = a[3];
	if (a[4]<dm) dm = a[4];

	min = bm + dm;

	return min;
}

int main()
{
	int a[5];
	a[0] = getprice(a);
	printf("%d\n", findmin(a)-50);

	return 0;

}