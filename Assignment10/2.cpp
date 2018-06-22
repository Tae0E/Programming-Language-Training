#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void main()
{
	struct node *A = NULL, *B, *ptr;
	int *digit, count = 1;
	int i, j, min, temp;

	digit = (int *)malloc(sizeof(int));
	scanf("%d", &digit[0]);

	while (digit[count - 1] != -1)
	{
		digit = (int *)realloc(digit, sizeof(int)*(count+1));

		scanf("%d", &digit[count]);
		count++;
	}
	for (i = 0; i < count - 1; i++)
	{
		min = i;
		for (j = i + 1; j < count - 1; j++)
		{
			if (digit[j] < digit[min])
				min = j;
		}
		temp = digit[i];
		digit[i] = digit[min];
		digit[min] = temp;
	}
	
	for (i = count -2; i >= 0 ; i--)
	{
		B = (struct node *)malloc(sizeof(struct node));
		B->data = digit[i];
		B->next = A;
		A = B;
	}
	for (ptr = A; ptr != NULL; ptr = ptr->next) 
		printf("%d ", ptr->data);
}