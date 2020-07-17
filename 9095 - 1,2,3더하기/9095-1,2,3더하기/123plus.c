/* acmicpc.net - 9095 1,2,3 ¥ı«œ±‚ */

#include <stdio.h>

int RES[12];

void calres()
{
	int i;

	RES[0] = 0;
	RES[1] = 1;
	RES[2] = 2;
	RES[3] = 4;

	for (i=4; i<=11; i++) RES[i] = RES[i-1] + RES[i-2] + RES[i-3];

}

int main()
{

	int T, key, i;

	scanf("%d", &T);

	calres();

	for (i=0; i<T; i++){
		scanf("%d", &key);
		printf("%d\n", RES[key]);
	}

	return 0;
}