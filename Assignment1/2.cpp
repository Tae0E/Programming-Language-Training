#include <stdio.h>

void main()
{
	int N;
	int a, b;

	printf("�ð� �Է� : ");
	scanf("%d", &N);

	a = N / 100;
	b = N % 100;

	if (a > 12 && a<24)
		printf("���� %d�� %d��", a - 12, b);
	else if (a == 12)
		printf("���� %d�� %d��", a, b);
	else if (a == 24)
		printf("���� %d�� %d��", a - 24, b);
	else if (a>24)
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	else
		printf("���� %d�� %d��", a, b);

}