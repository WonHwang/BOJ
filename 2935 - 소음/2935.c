/* BOJ - 2935번 소음 문제 */

#include <stdio.h>

char A[101], B[101], op, res[202];

void init() {
	op = '0';
	for (int i = 0; i < 101; i++) {
		A[i] = '3';
		B[i] = '3';
	}
	for (int i = 0; i < 202; i++) res[i] = '3';
}

void getA() {
	int i;
	for (i = 0; A[i - 1] != '\n'; i++) scanf("%c", &A[i]);
}
void getB() {
	int i;
	for (i = 0; B[i - 1] != '\n'; i++) scanf("%c", &B[i]);
}
void getop() {
	scanf("%c", &op);
	getchar();
}

void getinf() {
	
	getA();
	getop();
	getB();
}

void cal() {
	
	int a, b, i;

	init();
	getinf();

	for (i = 0;; i++) if (A[i + 1] == '\n') {
		a = i;
		break;
	}
	for (i = 0;; i++) if (B[i + 1] == '\n') {
		b = i;
		break;
	}

	if (op == '+') {
		if (a > b) {
			A[a - b] = '1';
			for (i = 0; A[i] != '\n'; i++) res[i] = A[i];
		}
		else if (b > a) {
			B[b - a] = '1';
			for (i = 0; B[i] != '\n'; i++) res[i] = B[i];
		}
		else {
			A[0] = '2';
			for (i = 0; A[i] != '\n'; i++) res[i] = A[i];
		}
	}
	else {
		res[0] = '1';
		for (i = 1; i <= a + b; i++) res[i] = '0';
	}

	for (i = 0; res[i] != '3'; i++) printf("%c", res[i]);
	printf("\n");

}

int main() {

	cal();
	return 0;
}