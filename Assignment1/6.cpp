#include <stdio.h>

void main()
{
	int a, b;
	double avg;

	printf("�Է� : ");
	scanf("%d%d", &a, &b);

	avg = ((double)a + (double)b) / 2;

	printf("�� = %d\n", a + b);
	printf("��� = %.1lf\n", avg);

	if (a > b)
	{
		printf("�� : %d\n", a / b);
		printf("������ : %d\n", a % b);
	}
	else
	{
		printf("�� : %d\n", b / a);
		printf("������ : %d\n", b % a);
	}

}