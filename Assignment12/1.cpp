#include <stdio.h>
#include <stdlib.h>

void main()
{
	char Fname[15];
	char word[30];
	char c;
	int ret;
	int charnum = 0, wordnum = 0, linenum = 0;
	printf("���� �̸�? ");
	gets_s(Fname);

	FILE *fp = fopen(Fname, "rt");
	
	int cnt = 0;
	int linecnt = 0;
	while (1)
	{
		ret = fscanf(fp, "%c", &c);
		if (ret != EOF)
		{
			if (c != '\n')
			{
				charnum++;
				linecnt++;
				if (c != ' ')
				{
					word[cnt++] = c;
				}
				else if(c == ' ' && cnt != 0)
				{
					wordnum++;
					for (int i = 0; i < cnt; i++)
						word[i] = NULL;
					cnt = 0;
				}
			}
			else
			{
				if (cnt != 0)
				{
					wordnum++;
					cnt = 0;
				}
				linenum++;
				linecnt = 0;
			}

		}
		else
		{
			if (cnt != 0)
				wordnum++;
			if (linecnt != 0)
				linenum++;
			else if (cnt == 0)
				linenum++;

			break;
		}
		
	}
	printf("���ڼ� : %d\n", charnum);
	printf("�ܾ�� : %d\n", wordnum);
	printf("��  �� : %d\n", linenum);
}