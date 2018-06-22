#include <stdio.h>

void main()
{
	int n;
	int a;
	double e = 1.0;
	int factorial = 1;

	printf("ют╥б : ");
	scanf("%d", &n);
	
	for (a = 1; a < n; a++)
	{
		factorial = factorial*a;
		e = e + 1.0 / factorial;
	}
	printf("e : %lf\n", e);
}