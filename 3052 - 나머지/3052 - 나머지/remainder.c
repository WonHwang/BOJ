/* acmicpc.net - 3052번 나머지 문제 */

#include <stdio.h>

int a[11];
int r[42];

void init(){
	
	int i;

	for (i=0; i<11; i++) a[i] = 0;
	for (i=0; i<42; i++) r[i] = 0;
}

void getint(){

	int i;

	for (i=1; i<11; i++){
		scanf("%d", &a[i]);
	}
}

void remainder(){

	int i;

	for (i=1; i<11; i++){
		a[i] = a[i] % 42;
	}
}

int howmany(){

	int i, many;

	many = 0;

	for (i=1; i<11; i++) r[a[i]]++;

	for (i=0; i<42; i++){
		if (r[i] != 0) many++;
	}

	return many;
}

int main(){
	init();
	getint();
	remainder();
	printf("%d\n", howmany());
	return 0;
}