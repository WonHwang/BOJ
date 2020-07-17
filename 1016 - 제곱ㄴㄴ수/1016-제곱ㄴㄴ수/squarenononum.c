/* acmicpc.net - 1016 Á¦°ö¤¤¤¤¼ö */

#include <stdio.h>
#include <math.h>

int seive[1000002];

void setseive()
{
	int i, j;

	for (i=0; i<1000002; i++) seive[i] = i;
	for (i=0; i<1000002; i++){
		if (i%2 == 0) seive[i] = -1;
	}
	seive[0] = -1;
	seive[1] = -1;
	seive[2] = 2;

	for (i=3; i<1001; i++){
		if (seive[i] != -1){
			for (j=i+1; j<1000002; j++){
				if (seive[j]!=-1 && seive[j]%seive[i]==0) seive[j]=-1;
			}
		}
	}

	for (i=0; i<1000002; i++) if (seive[i]!=-1) printf("%d\n", seive[i]);
}

int main()
{
	setseive();

	return 0;
}