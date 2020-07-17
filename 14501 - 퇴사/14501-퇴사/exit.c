/* acmicpc.net - 14501Ήψ Επ»η Ή®Α¦ */

#include <stdio.h>

int T[17];
int P[17];
int DP[17];

void init(){
	int i;
	for (i=0; i<17; i++){
		T[i] = 0;
		P[i] = 0;
		DP[i] = 0;
	}
}

int getinfo(){
	int i, N;

	scanf("%d", &N);

	for (i=1; i<=N; i++) scanf("%d %d", &T[i], &P[i]);

	return N;
}

void calculation(int N){
	int i, max;

	for (i=N; i>=1; i--){
		if (i+T[i]>N+1) DP[i]=0;
		else{
			DP[i] = DP[i+T[i]] + P[i];
		}
		if (DP[i]<DP[i+1]) DP[i] = DP[i+1];
	}

	max = DP[1];

	for (i=2; i<=N; i++){
		if (max<DP[i]) max = DP[i];
	}

	printf("%d\n", max);
}

int main(){
	init();
	calculation(getinfo());
	return 0;
}