/* acmicpc.net - 10951¹ø A+B ¹®Á¦ */

#include <stdio.h>

int main(){

	char A, B, C;

	while(1){
		A = getchar();
		B = getchar();
		C = getchar();
		if (A == EOF || B == EOF) break;
		putchar((A + C)-48);
		printf("\n");
	}
	return 0;
}