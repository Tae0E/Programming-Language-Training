#include <stdio.h>

void main()
{
	int N;
	int a, b, c, d;

	printf("1���� 9999������ ������ ���ԵǴ� ������ �Է� : ");
	scanf("%d", &N);

	a = N / 1000;
	b = (N / 100) % 10;
	c = (N / 10) % 10;
	d = N % 10;

	if (N<10 && N >= 0)
		printf("%d", d);//1�ڸ� ���϶�
	else if (N<100 && N>9 && d == 0)
		printf("%d", c);//2�ڸ��� �� ��°�ڸ��� 0�϶�
	else if (N<100 && N>9)
		printf("%d%d", d, c);//2�ڸ��� �� �� �ڸ��� 0�� ���� ���
	else if (N<1000 && N>99 && c == 0 && d == 0)
		printf("%d", b);//3�ڸ��� �� ��°��°�ڸ��� ��� 0�϶�
	else if (N<1000 && N>99 && d == 0)
		printf("%d%d", c, b);//3�ڸ��� �� ��°�ڸ��� 0�϶�
	else if (N<1000 && N>99)
		printf("%d%d%d", d, c, b);//3�ڸ��� �� �� �ڸ��� 0�� ���� ���
	else if (N<10000 && N>999 && b == 0 && c == 0 && d == 0)
		printf("%d", a);//4�ڸ��� �� ��°��°��°�ڸ��� ��� 0�϶�
	else if (N<10000 && N>999 && c == 0 && d == 0)
		printf("%d%d", b, a);//4�ڸ��� �� ��°��°�ڸ��� ��� 0�϶�
	else if (N<10000 && N>999 && d == 0)
		printf("%d%d%d", c, b, a);//4�ڸ��� �� ��°�ڸ��� 0�϶�
	else if (N<10000 && N>999)
		printf("%d%d%d%d", d, c, b, a);//4�ڸ��� �� �� �ڸ��� 0�� ���� ���

	
}