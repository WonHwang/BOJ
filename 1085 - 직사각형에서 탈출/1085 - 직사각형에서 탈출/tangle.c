/* acmicpc.net - 1085번 직사각형에서 탈출 문제 */

#include <stdio.h>

int x,y,w,h;

void init(){
	x = 0;
	y = 0;
	w = 0;
	h = 0;
}

void getint(){
	scanf("%d %d %d %d", &x, &y, &w, &h);
}

int findmin(){

	int min, i, dis[4];

	dis[0] = x;
	dis[1] = y;
	dis[2] = w-x;
	dis[3] = h-y;

	min = dis[0];

	for (i=1; i<4; i++){
		if (min > dis[i]) min = dis[i];
	}

	return min;
}

int main(){

	init();
	getint();
	printf("%d\n", findmin());

	return 0;
}