#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *make_list();

void main()
{
	struct node *A = NULL, *B, *pA, *pB;
	int count = 0;

	A = make_list();
	B = make_list();

	printf("합집합 = ");
	for (pA = A; pA != NULL; pA = pA->next)
		printf("%d ", pA->data);
	for (pB = B; pB != NULL; pB = pB->next)
	{
		for (pA = A; pA != NULL; pA = pA->next)
			if (pB->data == pA->data)
			{
				count++;
				break;
			}
		if (count == 0)
		{
			printf("%d ", pB->data);
		}
		count = 0;
	}
	printf("\n");

	printf("차집합 = ");
	for (pA = A; pA != NULL; pA = pA->next)
	{
		for (pB = B; pB != NULL; pB = pB->next)
			if (pB->data == pA->data)
			{
				count++;
				break;
			}
		if (count == 0)
		{
			printf("%d ", pA->data);
		}
		count = 0;
	}
	

}
struct node *make_list()
{
	struct node *A = NULL, *B;
	int digit;

	scanf("%d", &digit);

	while (digit != -1) {
		B = (struct node *)malloc(sizeof(struct node));
		B->data = digit;
		B->next = A;
		A = B;

		scanf("%d", &digit);
	}

	return A;
}