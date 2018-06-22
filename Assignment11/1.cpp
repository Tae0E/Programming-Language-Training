#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void print_list(struct node *start);
struct node *insert_last();
void main()
{
	struct node *A, *B, *start, *last;

	A = insert_last();
	B = insert_last();

	print_list(A);
	print_list(B);

	if (A->data <= B->data)
	{
		start = last = A;
		A = A->next;
	}
	else
	{
		start = last = B;
		B = B->next;
	}

	while (A != NULL && B != NULL)
	{
		if (A->data <= B->data)
		{
			last->next = A;
			last = A;
			A = A->next;
		}
		else
		{
			last->next = B;
			last = B;
			B = B->next;
		}
	}
	if (A == NULL)
		last->next = B;
	else
		last->next = A;

	print_list(start);
}
void print_list(struct node *start)
{
	struct node *ptr;
	printf("[ ");
	for (ptr = start; ptr != NULL; ptr = ptr->next)
		printf("%d ", ptr->data);
	printf("]\n");
}
struct node *insert_last()
{
	struct node *A = NULL, *B, *last;
	int digit;

	printf("ют╥б : ");
	scanf("%d", &digit);

	while (digit != -1)
	{
		B = (struct node *)malloc(sizeof(struct node));
		B->data = digit;
		B->next = NULL;
		if (A == NULL)
			A = last = B;
		else
		{
			last->next = B;
			last = B;
		}

		scanf("%d", &digit);
	}

	return A;
}