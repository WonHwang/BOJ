/* acmicpc.net - 2960 에라토스테네스의 체 */

#include <stdio.h>

int seive[1001];
int number[1001];

void setseive()
{
	int i;

	for (i=2; i<=1000; i++) seive[i] = i;
	seive[0] = 0;
	seive[1] = 0;

	for (i=0; i<=1000; i++) number[i] = 0;

}

void doseive(int N, int K)
{
	int i, j, tmp, num;
	tmp = 0;
	for (i=2; i<=N; i++){
		if (seive[i]!=0){
			for (j=1; i*j<=N; j++){
				if (seive[i*j]!=0){
					seive[i*j] = 0;
					number[tmp++] = i*j;
				}
			}
		}
	}
}


int main()
{
	int N, K, res;

	scanf("%d %d", &N, &K);
	setseive();
	doseive(N, K);

	printf("%d\n", number[K-1]);

	return 0;

}
