/* acmicpc.net - 2588¹ø °ö¼À ¹®Á¦ */

#include <stdio.h>

int main(){
	int A, B, C[3];

	scanf("%d", &A);
	scanf("%d", &B);

	C[0] = A * (B%10);
	C[1] = A * ((B%100)/10);
	C[2] = A * (B/100);

	printf("%d\n", C[0]);
	printf("%d\n", C[1]);
	printf("%d\n", C[2]);
	printf("%d\n", C[0] + C[1]*10 + C[2]*100);

	return 0;
}
