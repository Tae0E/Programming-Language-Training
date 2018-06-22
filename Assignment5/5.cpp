#include <stdio.h>
int fibo(int );

void main()
{
	printf("%d\n", fibo(6));
}


int fibo (int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n-2) + fibo(n-1);

}