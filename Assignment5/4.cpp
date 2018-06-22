#include <stdio.h>
int bin(int, int);

void main()
{
	printf("%d\n", bin(4, 2));
}


int bin(int n, int k)
{
	int s = n - k;

	if (n == s)
		return 1;
	else {
		return  (double)n / (double)k * bin(n - 1, k - 1);
	}

}