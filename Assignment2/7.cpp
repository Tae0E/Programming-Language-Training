#include <stdio.h>

void main()
{
	int n;
	int a, b, c;


	printf("�Է� : ");
	scanf("%d", &n);

	for (a = 1; a <= n; a++)
	{
		if (n % 2 == 0)
		{
			printf("Ȧ���� �Է��� �ּ���\n");
			break;
		}
		for (b = 1; b <= n-a; b++)
			printf(" ");
		for (c = 1; c <= 2*a-1; c++)
			printf("*");
		printf("\n");
	}

}