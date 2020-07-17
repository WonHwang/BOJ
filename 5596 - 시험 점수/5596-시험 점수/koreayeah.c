/* acmicpc.net - 5596번 시험 문제 문제 */

#include <stdio.h>

void makeres()
{
	int r1, r2, i, res;

	i=0;
	r1=0;
	r2=0;
	while(i<4){
		scanf("%d", &res);
		r1 += res;
		i++;
	}
	i=0;
	while(i<4){
		scanf("%d", &res);
		r2 += res;
		i++;
	}

	if (r1>r2) printf("%d\n", r1);
	else printf("%d\n", r2);
}

int main()
{
	makeres();
	return 0;
}