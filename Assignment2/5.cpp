#include <stdio.h>
#include <ctype.h>

void main()
{
	int ch;
	int a = 0;
	int b = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch != ' ')
		{
			if (isdigit(ch))
				b++;
		}
		if (isspace(ch))
		{
			if (b > 0)
			{
				a++;
				b = 0;
			}
		}
	}
	printf("%d\n", a);
}
