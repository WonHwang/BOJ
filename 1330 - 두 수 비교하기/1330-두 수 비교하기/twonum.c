/* acmicpc.net - 1330�� �� �� ���ϱ� ���� */

#include <stdio.h>

int compare(int a, int b){
	if (a>b) return 0;
	else if (a<b) return 1;
	else return 2;
}

int main(){
	int A, B, res;

	scanf("%d %d", &A, &B);

	res = compare(A, B);

	if (res == 0) printf(">\n");
	else if (res == 1) printf("<\n");
	else printf("==\n");

	return 0;
}