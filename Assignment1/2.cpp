#include <stdio.h>

void main()
{
	int N;
	int a, b;

	printf("시간 입력 : ");
	scanf("%d", &N);

	a = N / 100;
	b = N % 100;

	if (a > 12 && a<24)
		printf("오후 %d시 %d분", a - 12, b);
	else if (a == 12)
		printf("오후 %d시 %d분", a, b);
	else if (a == 24)
		printf("오전 %d시 %d분", a - 24, b);
	else if (a>24)
		printf("잘못 입력하셨습니다.\n");
	else
		printf("오전 %d시 %d분", a, b);

}