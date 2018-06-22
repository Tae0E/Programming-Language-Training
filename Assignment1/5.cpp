#include <stdio.h>

void main()
{
	int N;
	int a, b, c;

	printf("입력 : ");
	scanf("%d", &N);

	a = N / 100;
	b = (N / 10) % 10;
	c = N % 10;

	if (N<=99 || N>=1000)
		printf("잘못 입력하셨습니다. 세자리 수를 입력해 주세요\n");
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