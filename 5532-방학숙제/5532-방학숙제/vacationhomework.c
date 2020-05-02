/* acmicpc.net - 5532번 방학 숙제 문제 */
#include <stdio.h>

void calculation(){
	int L, A, B, C, D, mmax, kmax, i;

	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	i=1;
	while(1){
		B = B-D;
		if (B<=0){
			mmax = i;
			break;
		}
		i++;
	}
	i=1;
	while(1){
		A = A-C;
		if (A<=0){
			kmax = i;
			break;
		}
		i++;
	}
	if(mmax > kmax) L = L-mmax;
	else L  = L-kmax;

	printf("%d\n", L);

}

int main(){
	calculation();
	return 0;
}