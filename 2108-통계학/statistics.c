/* acmicpc.net - 2108 통계학 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 500000

void merge(int low, int mid, int high);
void mergeSort(int low, int high);
void copyArray(int start, int end);

int many[8002];
int mergeArr1[MAX_SIZE];
int mergeArr2[MAX_SIZE];

void mergeSort(int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high)/2;
        mergeSort(low, mid);
        mergeSort(mid+1, high);
        merge(low, mid, high);
	}
}

void merge(int low, int mid, int high) {

    int i = low;
    int j = mid+1;
    int k = low;

    while (i<=mid && j<=high) {
        if(mergeArr2[i] < mergeArr2[j]) {
           mergeArr1[k++] = mergeArr2[i++];
        } else if(mergeArr2[i] >= mergeArr2[j]) {
           mergeArr1[k++] = mergeArr2[j++];
        }
    }

 

    // 남은 영역 조사후 mergedArr으로 복사

    if(i>=mid) {
        while(j<=high) {
           mergeArr1[k++] = mergeArr2[j++];
        }
    }

    if(j>=high) {
        while(i<=mid) {
           mergeArr1[k++] = mergeArr2[i++];
        }
    }
    copyArray(low, high);
}

void copyArray(int start, int end) {
    int i;
    for (i=start; i<=end; i++) {
        mergeArr2[i] = mergeArr1[i];
    }
}
void getint(int N)
{

	int i;

	for (i=0; i<N; i++) scanf("%d", &mergeArr2[i]);
}

void initmany()
{
	int i;

	for (i=0; i<8002; i++) many[i] = 0;
}

int findmaxmany()
{
	int i, max;
	max = many[0];
	for (i=0; i<8001; i++) if (many[i+1]>max) max = many[i+1];
	return max;
}

int findmanyindex()
{
	int i, max, res, num;
	max = findmaxmany();

	num = 0;
	for (i=4001; i<=8001; i++){
		if (many[i]==max){
			num++;
			res = i-8002;
		}
		if (num==2) return res;
	}
	for (i=0; i<=4000; i++){
		if (many[i]==max){
			num++;
			res = i;
		}
		if (num==2) return res;
	}
	return res;

}

int main()
{
	int i, N, sum, mid, fre, range;
	float avg;
	scanf("%d", &N);

	getint(N);

	mergeSort(0,N-1);

	sum = 0;
	for (i=0; i<N; i++) sum += mergeArr2[i];
	avg = (float) sum / (float) N;

	printf("%1.0f\n", avg);

	if (N%2==1) mid = mergeArr2[N/2];
	else if (N%2==0) mid = (mergeArr2[N/2] + mergeArr2[(N/2)+1])/2;

	printf("%d\n", mid);

	for (i=0; i<N; i++){
		if (mergeArr2[i]>=0) many[mergeArr2[i]]++;
		else many[8002+mergeArr2[i]]++;
	}
	fre = findmanyindex();
	printf("%d\n", fre);

	range = mergeArr2[N-1] - mergeArr2[0];

	printf("%d\n", range);
	return 0;
}