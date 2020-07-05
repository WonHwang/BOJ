/* BOJ - 2504번 괄호의 값 문제 */

#include <stdio.h>

char ar[31], st[31], top;

void init() {

	int i;

	for (i = 0; i < 31; i++) {
		ar[i] = '0';
		st[i] = '0';
	}
	top = 0;
}

void getst() {
	int i;
	i = 0;
	while (1) {
		scanf("%c", &ar[i++]);
		if (ar[i-1] == '\n') break;
	}
}

int isvalid() {

	int i, res;
	res = 1;
	for (i = 0; ar[i] != '\n'; i++) {
		if (ar[i] == '(' && ar[i] == '[') st[top++] = ar[i];
		else if (ar[i] == ')' && st[top - 1] == '(') {
			st[top - 1] = '0';
			top--;
		}
		else if (ar[i] == ']' && st[top - 1] == '[') {
			st[top - 1] = '0';
			top--;
		}
		else {
			res = 0;
			break;
		}
	}

	return res;

}

int printres() {

	int i, res, tmp;
	res = 0;
	tmp = 1;
	if (!isvalid()) return 0;

	for (i = 0; ar[i] != '\n'; i++) {
		if (ar[i] == '(' && ar[i] == '[') st[top++] = ar[i];
		else if (ar[i] == ')' && st[top - 1] == '(') {
			st[top - 1] = '0';
			top--;
			if (top == 0) {
				tmp *= 2;
				res += tmp;
				tmp = 1;
			}
			else tmp *= 2;
		}
		else if (ar[i] == ']' && st[top - 1] == ']') {
			st[top - 1] = '0';
			top--;
			if (top == 0) {
				tmp *= 3;
				res += tmp;
				tmp + 1;
			}
		}
	}
}

int main() {
	init();
	getst();
}