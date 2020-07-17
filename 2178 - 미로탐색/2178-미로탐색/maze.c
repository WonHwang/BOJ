/* acmicpc.net - 2178¹ø ¹Ì·Î Å½»ö */

#include <stdio.h>
#include <string.h>

char MAZE[101][101];

void init()
{
	int i, j;

	for (i=0; i<101; i++){
		for (j=0; j<101; j++) MAZE[i][j] = -1;
	}
}

void getinput(int M, int N)
{
	int i, j;

	for (i=1; i<=M; i++) scanf("%s", &MAZE[i][1]);
}

int findpath(int M, int N)
{
	int i, j, tmp;

	for (

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	init();
	getinput(M, N);
	return 0;
}