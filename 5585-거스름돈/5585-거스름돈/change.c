/* acmicpc.net - 5585¹ø °Å½º¸§µ· */

#include <stdio.h>

int cal(int T)
{
	int change, sum;

	change = 1000-T;

	sum = 0;
	while(change >= 500){
		change -= 500;
		sum++;
	}
	while(change >= 100){
		change -= 100;
		sum++;
	}
	while(change >= 50){
		change -= 50;
		sum++;
	}
	while(change >= 10){
		change -= 10;
		sum++;
	}
	while(change >= 5){
		change -= 5;
		sum++;
	}
	while(change > 0){
		change -= 1;
		sum++;
	}

	return sum;
}

int main()
{
	int T;

	scanf("%d", &T);

	printf("%d\n", cal(T));

	return 0;
}