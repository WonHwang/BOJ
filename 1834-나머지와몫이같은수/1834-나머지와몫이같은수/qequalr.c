/* acmicpc.net - 1834�� �������� ���� ���� �� */

#include <stdio.h>

int main()
{
	long long int N;
	long long int res;
	scanf("%lld", &N);

	res = ((N-1)*N)/2;

	res = res*(N+1);

	printf("%lld\n", res);

	return 0;
}