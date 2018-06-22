#include <stdio.h>

void main()
{
	int a, b, c, d, e;
	int ms = 0;//음수의 합
	int ps = 0;//양수의 합

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (a < 0)
		ms = ms + a;
	if (b < 0)
		ms = ms + b;
	if (c < 0)
		ms = ms + c;
	if (d < 0)
		ms = ms + d;
	if (e < 0)
		ms = ms + e;

	if (a > 0)
		ps = ps + a;
	if (b > 0)
		ps = ps + b;
	if (c > 0)
		ps = ps + c;
	if (d > 0)
		ps = ps + d;
	if (e > 0)
		ps = ps + e;

	printf("음수의 합 : %d\n", ms);
	printf("양수의 합 : %d\n", ps);
}