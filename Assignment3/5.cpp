#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char arr[50];
	int a, b=0, count=0;

	printf("ют╥б : ");
	gets_s(arr);

	for(a=0; a<strlen(arr); a++)
	{
		if(isalpha(arr[a]) || isdigit(arr[a]))
			b++;
		if(isspace(arr[a]))
		{
			if(b>0)
			{
				count++;
				b=0;
			}
		}
	}
	if(arr[strlen(arr)-1] !=' ')
			count++;
	printf("%d\n", count);
}