#include <stdio.h>

void main()
{
	int N;
	int a, b, c;

	printf("�Է� : ");
	scanf("%d", &N);

	a = N / 100;
	b = (N / 10) % 10;
	c = N % 10;

	if (N<=99 || N>=1000)
		printf("�߸� �Է��ϼ̽��ϴ�. ���ڸ� ���� �Է��� �ּ���\n");
	else if (a>b && b>c)
		printf("%d", c); //a>b>c
	else if (a==b && b>c)
		printf("%d", c); //a=b>c
	else if (a>c && c>b)
		printf("%d", b); //a>c>b
	else if (a>c && c==b)
		printf("%d", b); //a>c=b
	else if (b>a && a>c)
		printf("%d", c); //b>a>c
	else if (b>c && c>a)
		printf("%d", a); //b>c>a
	else if (b>c && c==a)
		printf("%d", a); //b>c=a
	else if (c>a && a>b)
		printf("%d", b); //c>a>b
	else if (c==a && a>b)
		printf("%d", b); //c=a>b
	else if (c>b && b>a)
		printf("%d", a); //c>b>a 
	else if (c>b && b==a)
		printf("%d", a); //c>b=a
	else if (c==b && b>a)
		printf("%d", a); //c=b>a
	else if (a==b && b==c)
		printf("%d", b); //a=b=c

}