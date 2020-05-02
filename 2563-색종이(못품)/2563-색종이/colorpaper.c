/* acmicpc.net - 2563�� ������ ���� */

#include <stdio.h>

// 100x100�� �迭�� ��ǥ����� ǥ���ؼ� ���� �κи� ǥ���Ѵ�.

int xy[101][101];

void init()
{
	int i, j;

	for (i=0; i<101; i++){
		for (j=0; j<101; j++) xy[i][j] = 0;
	}
}

void setpaper()
{
	int x, y, i, j;

	scanf("%d %d", &x, &y);

	for (i=x; i<x+10; i++){
		for (j=y; j<y+10; j++) xy[i][j] = 1;
	}
}

void setinfo()
{
	int i, T;
	scanf("%d", &T);

	for (i=0; i<T; i++) setpaper();
}

int getwidth()
{
	int i, j, res;

	res = 0;

	for (i=0; i<101; i++){
		for (j=0; j<101; j++) if (xy[i][j] == 1) res += 1;
	}

	return res;
}

int main()
{
	init();
	setinfo();
	printf("%d\n", getwidth());

	return 0;
}