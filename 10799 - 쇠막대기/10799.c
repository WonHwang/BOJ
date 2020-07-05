/* BOJ - 10799�� �踷��� ���� */

#include <stdio.h>

char st[100001];
int sum, num;

void init() {
	// �ʱ�ȭ �Լ�
	int i;

	for (i = 0; i < 100001; i++) st[i] = '0';

	sum = 0;
	num = 0;

}

void getin() {

	int i;

	for (i = 0; st[i - 1] != '\n'; i++) scanf("%c", &st[i]);

}

void cal() {

	int i;

	for (i = 0; st[i] != '0'; i++) {
		if (st[i] == '(' && st[i + 1] != ')') num++;
		else if (st[i] == ')' && st[i - 1] != '(') {
			sum++;
			num--;
		}
		else if (st[i] == ')' && st[i - 1] == '(') sum += num;
	}

	printf("%d\n", sum);
}

int main() {

	init();
	getin();
	cal();

	return 0;

}