#include <stdio.h>

void main()
{
	int n;
	int a, b, c, d;


	printf("�Է� : ");
	scanf("%d", &n);

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= a; b++)
			printf(" ");
		for (d = n; d >= b; d--)
			printf("*");
		printf("\n");
		
	}

}