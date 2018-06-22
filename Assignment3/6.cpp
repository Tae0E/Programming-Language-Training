#include <stdio.h>
#include <stdlib.h>	
#include <time.h>

void main()
{
	int	i, j, digit, front = 0, A[6], B[6], temp, num, k;

	printf("ют╥б : ");
	scanf("%d", &num);

	
	srand((unsigned)time(0));
	for(k=1; k<=num; k++)
	{
	for (i = 0; i < 6; ) {
		digit = rand() % 45 + 1;
		for (j = 0; j < front; j++) 
		{
			if (A[j] == digit)
				break;
		}
		if (j == front) 
		{ 
			A[front] = digit;
			front++;
			i++;
		}
	
	}
	front=0;
	for(j=0; j<6; j++)
	{
		for(i=0; i<6; i++)
		{
			if(A[i]>A[j])
			{
				temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
		}
	}
	for(j=0; j<6; j++)
		printf("%d ", A[j]);
	printf("\n");
	}
}