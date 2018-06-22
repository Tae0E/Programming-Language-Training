#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input();
void output();
void search();

struct node {
	char product[20];
	int	 date;
	char client[10];
	char tel[15];
	struct node *next;
};

struct node *A = NULL, *B, *last;

void main()
{
	int menu;

	while (1) {
		printf("메뉴: 입력(1), 출력(2), 검색(3), 종료(4) ? ");
		scanf("%d", &menu);
		getchar();
		switch (menu) {
		case 1:
			input();
			break;
		case 2:
			output();
			break;
		case 3:
			search();
			break;
		case 4:
			return;

		}
	}
}

void input()
{
	char product[20];
	int date;
	char client[10];
	char tel[15];

	printf("제품명: ");
	B = (struct node *)malloc(sizeof(struct node));
	gets_s(B->product);

	printf("날짜: ");
	scanf("%d", &B->date);
	getchar();

	printf("고객명: ");
	gets_s(B->client);

	printf("전화번호: ");
	gets_s(B->tel);
	B->next = NULL;


	if (A == NULL)
		A = last = B;
	else
	{
		last->next = B;
		last = B;
	}

	printf("\n");
}

void output()
{
	struct node *ptr;
	int i = 1;
	for (ptr = A; ptr != NULL; ptr = ptr->next)
	{
		printf("AS %d\t제품명: %s\n", i, ptr->product);
		printf("\t날짜: %d\n", ptr->date);
		printf("\t고객명: %s\n", ptr->client);
		printf("\t전화번호: %s\n", ptr->tel);
		printf("\n");
		i++;
	}

}
void search()
{
	int num;
	char product[20];
	int date;
	char client[10];
	char tel[15];
	struct node *ptr;
	int i;

	printf("검색할 항목(제품명-1, 날짜-2, 고객명-3, 전화번호-4 ? ");
	scanf("%d", &num);
	getchar();
	switch (num)
	{
	case 1:
		printf("제품명? ");
		gets_s(product);
		i = 1;
		for (ptr = A; ptr != NULL; ptr = ptr->next)
		{
			if (strcmp(product, ptr->product) == 0)
			{
				printf("AS %d\t제품명: %s\n", i, ptr->product);
				printf("\t날짜: %d\n", ptr->date);
				printf("\t고객명: %s\n", ptr->client);
				printf("\t전화번호: %s\n", ptr->tel);
				printf("\n");
			}
			i++;
		}
		break;
	case 2:
		i = 1;
		printf("날짜? ");
		scanf("%d", &date);
		getchar();
		for (ptr = A; ptr != NULL; ptr = ptr->next)
		{
			if (date == ptr->date)
			{
				printf("AS %d\t제품명: %s\n", i, ptr->product);
				printf("\t날짜: %d\n", ptr->date);
				printf("\t고객명: %s\n", ptr->client);
				printf("\t전화번호: %s\n", ptr->tel);
				printf("\n");
			}
			i++;
		}
		break;
	case 3:
		i = 1;
		printf("고객명? ");
		gets_s(client);
		for (ptr = A; ptr != NULL; ptr = ptr->next)
		{
			if (strcmp(client, ptr->client) == 0)
			{
				printf("AS %d\t제품명: %s\n", i, ptr->product);
				printf("\t날짜: %d\n", ptr->date);
				printf("\t고객명: %s\n", ptr->client);
				printf("\t전화번호: %s\n", ptr->tel);
				printf("\n");
			}
			i++;
		}
		break;
	case 4:
		i = 1;
		printf("전화번호? ");
		gets_s(tel);
		for (ptr = A; ptr != NULL; ptr = ptr->next)
		{
			if (strcmp(tel, ptr->tel) == 0)
			{
				printf("AS %d\t제품명: %s\n", i, ptr->product);
				printf("\t날짜: %d\n", ptr->date);
				printf("\t고객명: %s\n", ptr->client);
				printf("\t전화번호: %s\n", ptr->tel);
				printf("\n");
			}
			i++;
		}
		break;
	}

}
