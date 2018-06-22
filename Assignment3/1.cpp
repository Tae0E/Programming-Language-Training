#include <stdio.h>

void main()
{
	int Num1[5];
	int Num2[5];
	int count = 0;
	int a, b;
	int c = 0;

	printf("ют╥б : ");
	for (a = 0; a < 5; a++)
		scanf("%d", &Num1[a]);

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a < 5; a++)
		{
			if (Num1[a] == b)
			{
				count++;
				break;
			}
		}
		if (count==0)
		{
			Num2[c] = b;
			c++;
		}
		count = 0;
	}
	for (a = 0; a < 5; a++)
		printf("%d ", Num2[a]);
}