#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sentence
{
	char word[30];
	char semi;
} S[200];

void main()
{
	char Fname[15];
	char word[30];
	char c;
	int ret;

	printf("파일 이름? ");
	gets_s(Fname);
	printf("검색 문자? ");
	gets_s(word);

	FILE *fp = fopen(Fname, "rt");
	
	int cnt = 0;
	int i = 0;
	int k = 0;
	while (1)
	{
		ret = fscanf(fp, "%c", &c);
		if (ret != EOF)
		{
			if (c != '\n')
			{
				if (c != ' ')
				{
					if (c == ',' || c == '.')
						S[k].semi = c;
					else
						S[k].word[i++] = c;
				}
				else if(c == ' ' && i != 0)
				{
					S[k].word[i] = NULL;
					k++;
					i = 0;
				}
			}
			else
			{
				if (i != 0)
				{
					S[k].word[i] = NULL;
					k++;
					i = 0;
				}
				for (int a = 0; a < k; a++)
				{
					if (!strcmp(S[a].word, word))
						cnt++;
				}
				if (cnt != 0)
				{
					for (int a = 0; a < k; a++)
					{
						printf("%s", S[a].word);
						if (S[a].semi != NULL)
						{
							printf("%c", S[a].semi);
							S[a].semi = NULL;
						}
						printf(" ");
					}
					printf("\n");
				}
				k = 0;
				i = 0;
				cnt = 0;
			}
		}
		else
		{
			if (i != 0)
			{
				S[k].word[i] = NULL;
				k++;
				i = 0;
			}
			for (int a = 0; a < k; a++)
			{
				if (!strcmp(S[a].word, word))
					cnt++;
			}
			if (cnt != 0)
			{
				for (int a = 0; a < k; a++)
				{
					printf("%s", S[a].word);
					if (S[a].semi != NULL)
					{
						printf("%c", S[a].semi);
						S[a].semi = NULL;
					}
					printf(" ");
				}
				printf("\n");
			}
			break;
		}
	}
}