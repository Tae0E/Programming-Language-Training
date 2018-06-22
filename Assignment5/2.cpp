#include <stdio.h>
void sort_three(int *a, int *b, int *c)
{
	int temp;
	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
	if (*a > *c)
	{
		temp = *c;
		*c = *a;
		*a = temp;
	}
	if (*b > *c)
	{
		temp = *c;
		*c = *b;
		*b = temp;
	}
}

void main()
{
	int x, y, z;

	printf("x, y, z ют╥б : ");
	scanf("%d%d%d", &x, &y, &z);

	sort_three(&x, &y, &z);

	printf("%d %d %d\n", x, y, z);

}