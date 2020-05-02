/* acmicpc.net - 10818번 최대, 최소 문제 */

#include <stdio.h>

int main(){
	int a[100001], N, min, max, i;
	scanf("%d", &N);
	for (i=1; i<=N; i++) scanf("%d", &a[i]);
	min = a[1];
	max = a[1];
	for (i=2; i<=N; i++){
		if (a[i]>max) max = a[i];
		if (a[i]<min) min = a[i];
	}
	printf("%d %d", min, max);
	return 0;
}