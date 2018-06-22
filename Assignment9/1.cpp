#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Str
{
	char verb[20];
	int num;
}STR;
void main()
{
	char str[100];
	int cnt = 0, n=0;
	int size = 8, counter = 0;
	STR *pStr;
	pStr = (STR *)malloc(sizeof(STR) * size);
	printf("ют╥б : ");
	gets_s(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			pStr[n].verb[cnt] = str[i];
			cnt++;
		}
		else
		{
			n++;
			cnt = 0;
		}
		if (n == size)
		{
			size += 5;
			pStr = (STR *)realloc(pStr, sizeof(STR) * size);
		}
		pStr[n].verb[cnt] = 0;
		pStr[n].num = 1;
	}

	for (int i = 0; i <= n; i++)
	{

		for (int j = i + 1; j <= n; j++)
		{
			if (strcmp(pStr[i].verb, pStr[j].verb) == 0)
			{
				pStr[i].num++;
				pStr[j].num = pStr[i].num;
				pStr[i].num = 0;
			}
		}
		if (pStr[i].num != 0)
			printf("%s\t\t%d\n", pStr[i].verb, pStr[i].num);
	}

}