/* BOJ - 10816번 숫자 카드 2 문제 */

#include <stdio.h>

int arr[100001], ans[100001], N, M;

void init() {
	for (int i = 0; i < 100001; i++) {
		arr[i] = 0;
		ans[i] = 0;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) scanf("%d", &ans[i]);
}

void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int tmp[100001];

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

int upperbound(int index) {
	int front, end, mid;
	front = index;
	end = N - 1;
	while (front <= end) {
		mid = (front + end) / 2;
		if (arr[mid] > arr[index]) end = mid;
		else front = mid + 1;
	}
	return end;
}

int lowerbound(int index) {
	int front, end, mid;
	front = 0;
	end = index;
	while (front < end) {
		mid = (front + end) / 2;
		if (arr[mid] < arr[index]) end = mid - 1;
		else front = mid;
	}
	return front;
}

int binarySearch(int front, int end, int K) {
	int mid, upper, lower;

	while (1) {
		mid = (front + end) / 2;
		if (arr[mid] == K) {
			upper = upperbound(mid);
			lower = lowerbound(mid);
			return upper - lower + 1;
		}
		if (arr[mid] > K) end = mid - 1;
		else front = mid + 1;
		if (front > end) return 0;
	}
}

void cal() {
	init();
	sorting();
	for (int i = 0; i < M; i++) printf("%d ", binarySearch(0, N-1, ans[i]));
	printf("\n");
}

int main() {
	cal();
	return 0;
}