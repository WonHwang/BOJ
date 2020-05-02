/* acmicpc.net - 10996번 별 찍기 - 21 문제 */

#include <stdio.h>

int main(){
	int i, j, k, N;

	scanf("%d", &N);

	if (N==1){
		printf("*\n");
		return 0;
	}

	for (i=1; i<=2*N; i++){
		for (j=1; j<=N; j++){
			if (i%2 == 1 && j%2 == 1) printf("*");
			else if (i%2 == 0 && j%2 == 0) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}