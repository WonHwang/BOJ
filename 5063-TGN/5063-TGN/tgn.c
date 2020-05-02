/* acmicpc.net - 5063¹ø TGN ¹®Á¦ */

#include <stdio.h>

void calcase(int T)
{
	int r, e, c, i;

	for (i=0; i<T; i++){
		scanf("%d %d %d", &r, &e, &c);

		if (r<e-c) printf("advertise\n");
		else if (r==e-c) printf("does not matter\n");
		else printf("do not advertise\n");
	}
}

int main()
{
	int T;

	scanf("%d", &T);
	calcase(T);

	return 0;
}