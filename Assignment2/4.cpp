#include <stdio.h>

void main()
{
	int n;
	int a;
	double p = 0;
	int x;

	printf("ют╥б : ");
	scanf("%d", &n);
	
	for (a = 1; a <= n; a++)
	{
		if (a % 2 == 0)
			p = p - 4.0 / (2*a - 1);
		else
			p = p + 4.0 / (2*a - 1);
	}
	printf("p : %lf\n", p);
}