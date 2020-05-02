/* acmicpc.net - 2562번 최대값 문제 */

#include <stdio.h>

int main(){
	int i, max, ind, a[10];
	for (i=1; i<10; i++) scanf("%d", &a[i]);
	max = a[1];
	ind = 1;
	for (i=2; i<=9; i++){
		if (max < a[i]){
			max = a[i];
			ind = i;
		}
	}
	printf("%d\n%d\n", max, ind);
	return 0;
}