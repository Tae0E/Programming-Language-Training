#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void main()
{
	struct node *A = NULL, *B = NULL, *tempA, *tempB, *ptrA, *ptrB;
	int	 digit;

	scanf("%d", &digit);

	while (digit != -1) {
		tempA = (struct node *) malloc(sizeof(struct node));
		tempA->data = digit;
		tempA->next = NULL;

		if (A == NULL)
		{
			A = tempA;
		}
		else {
			for (ptrA = A; ptrA->next != NULL; ptrA = ptrA->next)
				;
			ptrA->next = tempA;
		}
		scanf("%d", &digit);
	}

	for (ptrA = A; ptrA != NULL; ptrA = ptrA->next)
	{
		tempB = (struct node *) malloc(sizeof(struct node));
		tempB->data = ptrA->data;
		tempB->next = NULL;

		if (B == NULL)
		{
			B = tempB;
		}
		else {
			for (ptrB = B; ptrB->next != NULL; ptrB = ptrB->next)
				;
			ptrB->next = tempB;
		}
	}

	printf("A:");
	for (ptrA = A; ptrA != NULL; ptrA = ptrA->next) {
		printf("%d ", ptrA->data);
	}
	printf("\nB:");
	for (ptrB = B; ptrB != NULL; ptrB = ptrB->next) {
		printf("%d ", ptrB->data);
	}
}