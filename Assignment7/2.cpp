#include <stdio.h>
#include <stdlib.h>
typedef union {
	int r;
	char A[4];
} RND;
void my_rand();
void main()
{
	my_rand();
}

void my_rand()
{
	RND rnd;
	int p;
	p = (int)&rnd.r;
	for (int i = 0; i < 30; i++)
	{
		while (p > 65535)
		{
			p = p - 12345;
		}
		p = p - 4321 * i;
		while (p < 0)
		{
			p = p + 60000;
		}
		
		
		printf("%d\t", p);
	}
}