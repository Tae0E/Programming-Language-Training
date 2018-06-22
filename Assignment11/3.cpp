#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node *insert_front();
void print_list(struct node *start);

int count = 0;

void main()
{
	struct node *A, *B, *S = NULL, *Spt, *ptr;
	int cnt = 0;
	int cntA, cntB;

	A = insert_front();
	cntA = count;
	B = insert_front();
	cntB = count;

	if (cntA > cntB)
	{
		for (ptr = A; ptr != NULL; ptr = ptr->next)
		{
			Spt = (struct node *)malloc(sizeof(struct node));
			if (A->data + B->data < 10)
			{
				if (cnt > 0)

					Spt->data = A->data + B->data + 1;
				else
					Spt->data = A->data + B->data;
				cnt = 0;
			}
			else
			{
				if (cnt > 0)
					Spt->data = A->data + B->data - 10 + 1;
				else 
					Spt->data = A->data + B->data - 10;
				cnt = 0;
				cnt++;
			}
			Spt->next = S;
			S = Spt;
			A = A->next;
			if (B->next != NULL)
				B = B->next;
			else
				B->data = 0;
		}
	}
	else
	{
		for (ptr = B; ptr != NULL; ptr = ptr->next)
		{
			Spt = (struct node *)malloc(sizeof(struct node));
			if (A->data + B->data < 10)
			{
				if (cnt > 0)

					Spt->data = A->data + B->data + 1;
				else
					Spt->data = A->data + B->data;
				cnt = 0;
			}
			else
			{
				if (cnt > 0)
					Spt->data = A->data + B->data - 10 + 1;
				else
					Spt->data = A->data + B->data - 10;
				cnt = 0;
				cnt++;
			}
			Spt->next = S;
			S = Spt;
			if (A->next != NULL)
				A = A->next;
			else
				A->data = 0;
			B = B->next;
		}
	}
	print_list(S);
}

struct node *insert_front()
{
	struct node *A = NULL, *B;
	int input;
	count = 0;

	scanf("%d", &input);
	while (input != -1) {
		B = (struct node *)malloc(sizeof(struct node));
		B->data = input;
		B->next = A;
		A = B;

		count++;

		scanf("%d", &input);
	}

	return A;
}
void print_list(struct node *start)
{
	struct node *ptr;

	printf("[ ");
	for (ptr = start; ptr != NULL; ptr = ptr->next)
		printf("%d ", ptr->data);
	printf("]\n");
}