/* acmicpc.net - 10798 세로읽기 */

#include <stdio.h>
#include <string.h>

char word[15][15];

void setchar()
{
	int i, j;

	for (i=0; i<15; i++){
		for (j=0; j<15; j++){
			word[i][j] = '\0';
		}
	}
}

void getchara()
{
	int i, j;

	for (i=0; i<5; i++) scanf("%s", &word[i][0]);

}

void printchar()
{
	int i, j;

	for (i=0; i<15; i++){
		for (j=0; j<5; j++){
			if (word[j][i]!='\0') printf("%c", word[j][i]);
		}
	}
	printf("\n");
}

int main()
{
	setchar();
	getchara();
	printchar();
	return 0;
}