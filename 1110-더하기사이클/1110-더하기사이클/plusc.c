/* acmicpc.net - 1110번 더하기 사이클 문제 */

#include <stdio.h>

int cycle(int N){
	
	int i, tmp, a, b;
	
	if (N<10){
		a = 0;
		b = N;
	}
	else{
		a = N / 10;
		b = N % 10;
	}

	i = 0;

	while(1){
		tmp = a + b;
		a = b;
		b = tmp % 10;
		i++;
		if (((a*10) + b) == N) break;
	}

	return i;
}

int main(){
	int N;
	scanf("%d", &N);
	printf("%d\n", cycle(N));
	return 0;
}