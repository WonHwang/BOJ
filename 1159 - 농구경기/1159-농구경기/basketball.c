/* acmicpc.net - 1159번 농구경기 문제 */

#include <stdio.h>

int main(){
	int N, i, namenum[27], res;
	char name[150], c;
	
	scanf("%d", &N);

	for (i=0; i<27; i++) namenum[i] = 0;

	for (i=0; i<150; i++) name[i] = '0';

	for (i=0; i<N; i++) scanf("%s", &name[i]);

	for (i=0; i<N; i++) namenum[(int) name[i] - 'a'] ++;

	res = 0;

	for (i=0; i<26; i++){
		if (namenum[i]>=5){
			printf("%c", i+'a');
			res = 1;
		}
	}
	if (res == 0) printf("PREDAJA\n");
	else printf("\n");

	return 0;
}