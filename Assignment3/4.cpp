#include <stdio.h>

void main()
{
	char arr1[8];
	char arr2[8];
	int a, b;
	int temp;

	printf("ют╥б : ");
	gets_s(arr1);
	
	for(b=0; b<7; b++)
	{
		for(a=0; a<7; a++)
		{
			if(arr1[a]>arr1[b])
			{
				temp=arr1[b];
				arr1[b]=arr1[a];
				arr1[a]=temp;
			}
		}
	}
	for(a=0; a<7; a++)
	{
		if(arr1[a]>'0')
		{
			temp=arr1[a];
			arr1[a]=arr1[0];
			arr1[0]=temp;
			break;
		}

	}
	for(a=0; a<7; a++)
	{
		printf("%c ", arr1[a]);
	}

}