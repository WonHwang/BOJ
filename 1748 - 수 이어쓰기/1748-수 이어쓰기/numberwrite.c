/* acmicpc.net - 1748번 수 이어쓰기 문제 */

#include <stdio.h>

int tensquare(int N){
	int i, res;
	res = 1;
	for (i=1; i<=N; i++) res = res*10;
	return res;
}
int calculation(){
	int N, i, res, num[10];

	scanf("%d", &N);

	for (i=0; i<10; i++) num[i] = 0;

	for (i=1; i<10; i++){
		if (N >= tensquare(i)) num[i] = tensquare(i) - tensquare(i-1);
		else if (N<tensquare(i)){
			num[i] = N - tensquare(i-1) + 1;
			break;
		}
	}

	res = 0;
	for (i=1; i<10; i++) res += num[i] * i;

	return res;
}

int main(){

	printf("%d\n", calculation());

	return 0;
}