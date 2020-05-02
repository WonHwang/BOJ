/* acmicpc.net - 10707번 수도요금 문제 */

#include <stdio.h>

int info[5];

void setinfo()
{
	int i;

	for (i=0; i<5; i++) scanf("%d", &info[i]);
}

void calprice()
{
	int x, y;

	setinfo();

	x = info[0] * info[4];

	if (info[2] >= info[4]) y = info[1];
	else y = (info[4]-info[2])*info[3] + info[1];

	if (x>y) printf("%d\n", y);
	else printf("%d\n", x);

}

int main()
{
	calprice();

	return 0;
}