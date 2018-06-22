#include <stdio.h>

void main()
{
	int N;
	int a, b, c, d;

	printf("1부터 9999까지의 범위에 포함되는 정수를 입력 : ");
	scanf("%d", &N);

	a = N / 1000;
	b = (N / 100) % 10;
	c = (N / 10) % 10;
	d = N % 10;

	if (N<10 && N >= 0)
		printf("%d", d);//1자리 수일때
	else if (N<100 && N>9 && d == 0)
		printf("%d", c);//2자리수 중 넷째자리가 0일때
	else if (N<100 && N>9)
		printf("%d%d", d, c);//2자리수 중 각 자리에 0이 없는 경우
	else if (N<1000 && N>99 && c == 0 && d == 0)
		printf("%d", b);//3자리수 중 셋째넷째자리가 모두 0일때
	else if (N<1000 && N>99 && d == 0)
		printf("%d%d", c, b);//3자리수 중 넷째자리가 0일때
	else if (N<1000 && N>99)
		printf("%d%d%d", d, c, b);//3자리수 중 각 자리에 0이 없는 경우
	else if (N<10000 && N>999 && b == 0 && c == 0 && d == 0)
		printf("%d", a);//4자리수 중 둘째셋째넷째자리가 모두 0일때
	else if (N<10000 && N>999 && c == 0 && d == 0)
		printf("%d%d", b, a);//4자리수 중 셋째넷째자리가 모두 0일때
	else if (N<10000 && N>999 && d == 0)
		printf("%d%d%d", c, b, a);//4자리수 중 넷째자리가 0일때
	else if (N<10000 && N>999)
		printf("%d%d%d%d", d, c, b, a);//4자리수 중 각 자리에 0이 없는 경우

	
}