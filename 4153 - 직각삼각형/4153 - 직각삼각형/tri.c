/* acmicpc.net - 4153번 직각삼각형 문제 */

#include <stdio.h>

int main(){

	int a, b, c;

	while(1){
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) return 0;

		if (a>b && a>c && (a*a) == (b*b) + (c*c)) printf("right\n");
		else if (b>a && b>c && (b*b) == (a*a) + (c*c)) printf("right\n");
		else if (c>a && c>b && (c*c) == (a*a) + (b*b)) printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}