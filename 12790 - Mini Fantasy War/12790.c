/* BOJ - 12790¹ø Mini Fantasy War ¹®Á¦ */

#include <stdio.h>

void printres() {
	int HP, MP, AT, DF, uHP, uMP, uAT, uDF;

	scanf("%d %d %d %d %d %d %d %d", &HP, &MP, &AT, &DF, &uHP, &uMP, &uAT, &uDF);

	HP += uHP;
	if (HP <= 0) HP = 1;
	MP += uMP;
	if (MP <= 0) MP = 1;
	AT += uAT;
	if (AT <= 0) AT = 0;
	DF += uDF;

	printf("%d\n", HP + (5 * MP) + (2 * AT) + (2 * DF));
}

int main() {
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) printres();

	return 0;

}