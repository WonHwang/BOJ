/* BOJ - 1920번 수 찾기 문제 */

#include <stdio.h>

unsigned int arr[100001], ans[100001];
int N, M;

void init() {
	for (int i = 0; i < 100001; i++) {
		arr[i] = 0;
		ans[i] = 0;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%u", &arr[i]);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) scanf("%u", &ans[i]);
}

void merge(unsigned int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	unsigned int tmp[100001];
	while (i <= q && j <= r) {
		if (data[i] <= data[j]) tmp[k++] = data[i++];
		else tmp[k++] = data[j++];
	}
	while (i <= q) tmp[k++] = data[i++];
	while (j <= r) tmp[k++] = data[j++];
	for (int a = p; a <= r; a++) data[a] = tmp[a];
}

void mergeSort(unsigned int data[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}

void sorting() {
	mergeSort(arr, 0, N-1);
}

int binarySearch(int front, int end, unsigned int K) {
	int mid;
	if (K > arr[N - 1] || K < arr[0]) return 0;
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
	sorting();
	for (int i = 0; i < M; i++) printf("%d\n", binarySearch(0, N - 1, ans[i]));
}

int main() {
	cal();
	return 0;
}