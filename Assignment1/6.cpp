#include <stdio.h>

void main()
{
	int a, b;
	double avg;

	printf("입력 : ");
	scanf("%d%d", &a, &b);

	avg = ((double)a + (double)b) / 2;

	printf("합 = %d\n", a + b);
	printf("평균 = %.1lf\n", avg);

	if (a > b)
	{
		printf("몫 : %d\n", a / b);
		printf("나머지 : %d\n", a % b);
	}
	else
	{
		printf("몫 : %d\n", b / a);
		printf("나머지 : %d\n", b % a);
	}

}