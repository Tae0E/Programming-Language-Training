#include <stdio.h>

void main()
{
	int a, b, c, d, e;
	int ms = 0;//������ ��
	int ps = 0;//����� ��

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

	printf("������ �� : %d\n", ms);
	printf("����� �� : %d\n", ps);
}