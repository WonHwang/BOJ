/* acmicpc.net - 1149 RGB°Å¸® */

#include <stdio.h>

int RGB[1000][3];
int DRGB[1000][3];

void getRGB(int N)
{
	int i;

	for (i=0; i<N; i++){
		scanf("%d %d %d", &RGB[i][0], &RGB[i][1], &RGB[i][2]);
	}
}

void initDRGB(int N)
{
	int i;

	for (i=0; i<N; i++){
		DRGB[i][0] = 0;
		DRGB[i][1] = 0;
		DRGB[i][2] = 0;
	}
	DRGB[0][0] = RGB[0][0];
	DRGB[0][1] = RGB[0][1];
	DRGB[0][2] = RGB[0][2];
}

int smaller(int a, int b)
{
	if (a>=b) return b;
	else return a;
}

int findmin(int N)
{
	int i, res;

	initDRGB(N);

	for (i=1; i<N; i++){
		DRGB[i][0] = RGB[i][0] + smaller(DRGB[i-1][1], DRGB[i-1][2]);
		DRGB[i][1] = RGB[i][1] + smaller(DRGB[i-1][0], DRGB[i-1][2]);
		DRGB[i][2] = RGB[i][2] + smaller(DRGB[i-1][0], DRGB[i-1][1]);
	}

	res = smaller(DRGB[N-1][0], DRGB[N-1][1]);
	res = smaller(res, DRGB[N-1][2]);

	return res;

}

int main()
{
	int N, res;

	scanf("%d", &N);

	getRGB(N);
	res = findmin(N);

	printf("%d\n", res);

	return 0;

}