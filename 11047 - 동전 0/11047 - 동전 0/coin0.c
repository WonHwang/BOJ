/* acmicpc.net - 11047번 동전 0 문제 */

#include <stdio.h>

int a[10];
int N;
int K;

void init(){
	int i;
	for (i=0; i<10; i++) a[i] = 0;
	N = 0;
	K = 0;
}

void getint(){
	int i;
	scanf("%d %d", &N, &K);
	for (i=0; i<N; i++) scanf("%d", &a[i]);
}

int cal(){
	int i, sum;
	sum = 0;
	for (i=N-1; i>=0; i--){
		while(K>=a[i]){
			K -= a[i];
			sum++;
		}
	}
	return sum;
}

int main(){
	init();
	getint();
	printf("%d\n", cal());
	return 0;
}