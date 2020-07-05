/* BOJ - 3034번 앵그리 창영 문제 */

#include <stdio.h>

int N, W, H, T[50];

void cal() {
	int i;
	scanf("%d %d %d", &N, &W, &H);
	for (i = 0; i < N; i++) scanf("%d", &T[i]);
	for (i = 0; i < N; i++) {
		if (T[i] <= W || T[i] <= H || (T[i] * T[i]) <= (W*W) + (H*H)) printf("DA\n");
		else printf("NE\n");
	}
}

int main() {
	cal();
	return 0;
}