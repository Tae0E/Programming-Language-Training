#include <stdio.h>
int isprime(int x)
{
	int n;
	for (n = 2; n < x; n++)
		if (x % n == 0)
			break;

	if (n == x)
		return 1;
	else
		return 0;
}

void main()
{
	int i;
	printf("ют╥б : ");
	scanf("%d", &i);

	printf("isprime(%d) -> %d\n", i, isprime(i));

}