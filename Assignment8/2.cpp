#include <stdio.h>
unsigned reverse_bits(unsigned int num)
{
	int n=1;
	int sum = 0;
	for (int i = 31; i >= 0; i--)
	{
		if (num & 1 << i)
		{
			if (i == 31)
				n = 1;
			else
				n = 2 * n;
			sum = sum + n;
		}
		else
		{
			if (i == 31)
				n = 1;
			else
				n = 2 * n;
		}
	}
	return sum;

}
void main()
{
	int cnt = 1;
	unsigned int number;
	printf("정수 입력: ");
	scanf("%d", &number);
	for (int i = 31; i >= 0; i--)
	{
		if (number & 1 << i)
			printf("1");
		else
			printf("0");

		if (i % 4 == 0)
			printf(" ");
	}
	printf("\n");
	for (int i = 31; i >= 0; i--)
	{
		if (reverse_bits(number) & 1 << i)
			printf("1");
		else
			printf("0");
		if (cnt % 4 == 0)
			printf(" ");
		cnt++;
	}

}