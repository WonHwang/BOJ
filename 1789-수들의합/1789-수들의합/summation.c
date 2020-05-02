/* acmicpc.net - 1789번 수들의 합 */

#include <stdio.h>

int getint()
{
	long long int N;

	scanf("%d", &N);

	return N;
}

int calsum(long long int N)
{
	int i, sig;

	i = 1;
	sig = 0;
	while(sig<=N){
		sig = i * (i+1) / 2;
		if (N-sig <= i) return i;
		i++;
	}

	return i;
}

int main()
{
	long long int N;

	N = getint();

	printf("%d\n", calsum(N));

	return 0;
}