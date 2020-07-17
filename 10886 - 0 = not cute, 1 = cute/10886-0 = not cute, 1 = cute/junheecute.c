/* acmicpc.net - 10886¹ø 0 = not cute / 1 = cute */

#include <stdio.h>

void dopoll()
{
	int N, op[2], i, tmp;

	scanf("%d", &N);

	op[0] = op[1] = 0;

	for (i=0; i<N; i++){
		scanf("%d", &tmp);
		if (tmp == 0) op[0]++;
		else if (tmp == 1) op[1]++;
	}

	if (op[0]>op[1]) printf("Junhee is not cute!\n");
	else printf("Junhee is cute!\n");
}

int main()
{

	dopoll();
	return 0;

}