/* BOJ - 5575번 타임카드 문제 */

#include <stdio.h>

int inh[3], inm[3], ins[3], outh[3], outm[3], outs[3];

void getinfo() {
	for (int i = 0; i < 3; i++)
		scanf("%d %d %d %d %d %d", &inh[i], &inm[i], &ins[i], &outh[i], &outm[i], &outs[i]);
}

void cal() {
	int h, m, s, i;

	for (i = 0; i < 3; i++) {
		h = outh[i] - inh[i];
		m = outm[i] - inm[i];
		s = outs[i] - ins[i];
		if (s < 0) {
			m--;
			s += 60;
		}
		if (m < 0) {
			h--;
			m += 60;
		}
		printf("%d %d %d\n", h, m, s);
	}
}

int main() {
	getinfo();
	cal();
	return 0;
}