/* BOJ - 2309¹ø ÀÏ°ö ³­ÀïÀÌ ¹®Á¦ */

#include <stdio.h>

int nine[9], seven[7];

void init() {

	int i;

	for (i = 0; i < 7; i++) {
		seven[i] = 0;
		nine[i] = 0;
	}

	nine[7] = 0;
	nine[8] = 0;
}

void getnine() {

	int i;

	for (i = 0; i < 9; i++) scanf("%d", &nine[i]);
}

void find() {

	int i, j, tmp;

	tmp = 0;
	for (i = 0; i < 9; i++) tmp += nine[i];

	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			if (tmp - nine[i] - nine[j] == 100) {
				nine[i] = 0;
				nine[j] = 0;
				break;
			}
		}
		if (nine[i] == 0 && nine[j] == 0) break;
	}

	
	for (i = 0, j = 0; i < 9; i++) {
		if (nine[i] != 0) {
			seven[j] = nine[i];
			j++;
		}
	}

	for (i = 1; i < 7; i++) {
		for (j = 0; j < 7 - i; j++) {
			if (seven[j] > seven[j + 1]) {
				tmp = seven[j];
				seven[j] = seven[j + 1];
				seven[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 7; i++) printf("%d\n", seven[i]);
}

int main() {

	init();
	getnine();
	find();

	return 0;

}