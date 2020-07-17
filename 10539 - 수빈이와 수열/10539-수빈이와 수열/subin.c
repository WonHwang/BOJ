/* acmicpc.net - 10539번 수빈이와 수열 문제 */

#include <stdio.h>

long long int A[101];
long long int B[101];

void init()
{
	int i;

	for (i=0;i <101; i++){
		A[i]=0;
		B[i]=0;
	}
}

void setinfo()
{
	int T, i;

	init();
	scanf("%d", &T);
	for (i=1; i<=T; i++) scanf("%d", &B[i]);
	A[1]=B[1];
	for (i=2; i<=T; i++) A[i] = (B[i]*i) - (B[i-1])*(i-1);
}

void printres()
{
	int i;

	for (i=1; A[i]!=0; i++) printf("%d ", A[i]);
	printf("\n");
}

int main()
{
	setinfo();
	printres();

	return 0;
}
