/* acmicpc.net - 2446번 별찍기 - 9 문제 */

#include <stdio.h>

int main(){
	int i, j, k, N;
	scanf("%d", &N);
	for (i=1; i<=N; i++){
		for (k=0; k<i-1; k++) printf(" ");
		for (j=(2*N)-(2*i); j>=0; j--) printf("*");
		printf("\n");
	}
	for (i=N-1; i>0; i--){
		for (k=0; k<i-1; k++) printf(" ");
		for (j=(2*N)-(2*i); j>=0; j--) printf("*");
		printf("\n");
	}
	return 0;
}