#include <stdio.h>

void main()
{
	int n, m;
	int a, b;
	int count=0;

	printf("두개의 정수 입력 : ");
	scanf("%d%d", &n, &m);

	if (n > m)
	{
		for (a = m; a <= n; a++)
		{
			if (a % 3 == 0 || a % 5 == 0)
			{
				count++;
			}
		}
		if (m == 0)
			printf("%d", count - 1);
		else
			printf("%d", count);
	}
	else
	{
		for (b = n; b <= m; b++)
		{
			if (b % 3 == 0 || b % 5 == 0)
			{
				count++;
			}
		}
		if (n == 0)
			printf("%d", count - 1);
		else
			printf("%d", count);
	}

}