/* acmicpc.net - 6459번 만취한 상범 문제 */

#include <stdio.h>

int room[101];

void init()
{
	int i;

	for (i=0; i<101; i++) room[i] = -1;

}

void cal()
{
	int n, i, k, j;

	scanf("%d", &n);

	for (i=1; i<=n; i++) room[i] = 1;

	for (i=1; i<=n; i++){
		for (k=1; i*k<=n; k++){
			if (room[i*k]==1) room[i*k] = 0;
			else if (room[i*k]==0) room[i*k] = 1;
		}
	}

	k=0;

	for (i=1; i<=n; i++) if(room[i]==0) k++;

	printf("%d\n", k);
}

void printres()
{
	int T, i;

	scanf("%d", &T);

	for (i=0; i<T; i++){
		init();
		cal();
	}
}

int main()
{
	printres();

	return 0;
}