/* acmicpc.net - 5565 ¿µ¼öÁõ */

#include <stdio.h>

int calprice()
{
	int total, book[9], i;

	scanf("%d", &total);
	for (i=0; i<9; i++) scanf("%d", &book[i]);
	for (i=0; i<9; i++) total -= book[i];

	return total;
}

int main()
{
	printf("%d\n", calprice());

	return 0;
}