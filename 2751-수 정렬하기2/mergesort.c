/* acmicpc.net - 10989 수 정렬하기3 */

#include <stdio.h>

int count[10001];

void initcount()
{
	int i;

	for (i=0; i<10001; i++) count[i] = 0;
}

void getcount(int N)
{
	int i, num;

	for (i=0; i<N; i++){
		scanf("%d", &num);
		count[num]++;
	}
}

void printcount()
{
	int i, num;

	for (i=0; i<10001; i++){
		while(count[i]-->0) printf("%d\n", i);
	}
}

int main()
{
	int N;

	scanf("%d", &N);

	initcount();
	getcount(N);
	printcount();
	return 0;
}