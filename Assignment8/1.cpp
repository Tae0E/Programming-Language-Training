#include <stdio.h>
int count_one(unsigned int num)
{
	int cnt = 0;
	for (int i = 31; i >= 0; i--)
		if (num & 1 << i)
			cnt++;
	return cnt;
}
void main()
{
	unsigned int number;

	printf("���� �Է�: ");
	scanf("%d", &number);
	printf("%d�� \n", count_one(number));

}