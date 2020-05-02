/* acmicpc.net - 2753¹ø À±³â ¹®Á¦ */

#include <stdio.h>

int main()
{
	int Y, res;

	res = 0;
	scanf("%d", &Y);

	if (Y%400 == 0) res = 1;
	else if (Y%100 == 0) res = 0;
	else if (Y%4 == 0) res = 1;

	printf("%d\n", res);

	return 0;
}
