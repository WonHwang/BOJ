/* acmicpc.net - 2822번 점수 계산 */

#include <stdio.h>

int score[8];

void getscore()
{
	int i;

	for (i=0; i<8; i++) scanf("%d", &score[i]);

}

void removeless()
{
	int i, j, min, index;

	for (j=0; j<3; j++){
		i=0;
		while(1){
			if (score[i]==-1) i++;
			else{
				min = score[i];
				index = i;
				break;
			}
		}
		for (i=1; i<8; i++){
			if (min>score[i] && score[i]>=0){
				min = score[i];
				index = i;
			}
		}
		score[index] = -1;
	}
}

int gettotal()
{
	int i, sum;

	for (i=0, sum=0; i<8; i++) if (score[i] != -1) sum+=score[i];

	return sum;
}


void printresult()
{
	int i;

	for (i=0; i<8; i++) if (score[i]>=0) printf("%d ", i+1);
}

void cal()
{
	getscore();
	removeless();
	printf("%d\n", gettotal());
	printresult();
}

int main()
{
	cal();
	return 0;
}