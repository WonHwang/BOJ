/* acmicpc.net - 3053번 택시 기하학 문제 */

#include <stdio.h>

#define PI 3.141592653589793238462643383279502884197169399375105820974944

void sol(){
	int r;
	double eu, taxi;
	scanf("%d", &r);

	eu = PI*r*r;
	taxi = 2*r*r;

	printf("%5f\n", eu);
	printf("%5f\n", taxi);
}

int main(){

	sol();

	return 0;
}