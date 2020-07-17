/* acmicpc.net - 5597번 과제 안내신 분? */

#include <stdio.h>

int arr[31];

void calres()
{
	int i, tmp;

	for (i=0; i<31; i++) arr[i] = 0;

	for (i=0; i<28; i++){
		scanf("%d", &tmp);
		arr[tmp]++;
	}

	for (i=1; i<31; i++) if (arr[i]==0) printf("%d\n", i);
}

int main()
{
	calres();

	return 0;
}