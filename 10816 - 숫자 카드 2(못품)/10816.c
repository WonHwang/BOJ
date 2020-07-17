/* BOJ - 10816번 숫자 카드 2 문제 */

#include <stdio.h>

int arr[500001], ans[500001][2], N, M;

void init() {
	for (int i = 0; i < 500001; i++) {
		arr[i] = 0;
		ans[i][0] = 0;
		ans[i][1] = 0;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) scanf("%d", &ans[i][0]);
}

void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p, tmp[500001];

	while (i <= q && j <= r) {
		if (data[i] <= data[j]) tmp[k++] = data[i++];
		else tmp[k++] = data[j++];
	}
	while (i <= q) tmp[k++] = data[i++];
	while (j <= r) tmp[k++] = data[j++];
	for (int a = p; a <= r; a++) data[a] = tmp[a];
}

void mergeSort(int data[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}

void sorting() {
	mergeSort(arr, 0, N - 1);
}

int binarySearch(int front, int end, int K) {
	int mid;

	while (1) {
		mid = (front + end) / 2;
		if (arr[mid] == K) return 1;
		if (arr[mid] > K) end = mid - 1;
		else front = mid + 1;
		if (front > end) return 0;
	}
}

void cal() {
	init();
	printf("init clear\n");
	sorting();
	printf("sorting clear\n");
	for (int i = 0; i < M; i++) {
		if (binarySearch(0, N - 1, ans[i][0])) {
			for (int j = 0; arr[j] <= ans[i][0]; j++) if (arr[j] == ans[i][0]) ans[i][1]++;
		}
	}
	printf("search clear\n");
	for (int i = 0; i < M; i++) printf("%d ", ans[i][1]);
	printf("\n");
}

int main() {
	cal();
	return 0;
}