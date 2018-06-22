#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input(int);
void output(int);
void search(int);

typedef struct AS_INFO {
	char product[20];
	int	date;
	char client[10];
	char tel[15];
}as;

int size = 10;
as *pAS = (as *)malloc(sizeof(as) * size);

void main()
{
	int counter = 0;
	int menu;

	
	while (1) {
		printf("메뉴: 입력(1), 출력(2), 검색(3), 종료(4) ? ");
		scanf("%d", &menu);
		getchar();
		switch (menu) {
		case 1:
			input(counter++);
			break;
		case 2:
			output(counter);
			break;
		case 3:
			search(counter);
			break;
		case 4:
			return;

		}
		if (counter == size)
		{
			size += 10;
			pAS = (as *)realloc(pAS, sizeof(as) * size);
		}
	}
}

void input(int id) {

	printf("제품명: ");
	gets_s(pAS[id].product);
	printf("날짜: ");
	scanf("%d", &pAS[id].date);
	getchar();
	printf("고객명: ");
	gets_s(pAS[id].client);
	printf("전화번호: ");
	gets_s(pAS[id].tel);
	printf("\n");
}

void output(int n) {

	for (int i = 0; i < n; i++) {
		printf("AS %d\t제품명: %s\n", i + 1, pAS[i].product);
		printf("\t날짜: %d\n", pAS[i].date);
		printf("\t고객명: %s\n", pAS[i].client);
		printf("\t전화번호: %s\n", pAS[i].tel);
		printf("\n");
	}

}
void search(int n)
{
	int num;
	char product[20];
	int date;
	char client[10];
	char tel[15];


	printf("검색할 항목(제품명-1, 날짜-2, 고객명-3, 전화번호-4 ? ");
	scanf("%d", &num);
	getchar();
	switch (num)
	{
	case 1:
		printf("제품명? ");
		gets_s(product);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(product, pAS[i].product) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, pAS[i].product);
				printf("\t날짜: %d\n", pAS[i].date);
				printf("\t고객명: %s\n", pAS[i].client);
				printf("\t전화번호: %s\n", pAS[i].tel);
				printf("\n");
			}
		}
		break;
	case 2:
		printf("날짜? ");
		scanf("%d", &date);
		getchar();
		for (int i = 0; i < n; i++)
		{
			if (date == pAS[i].date)
			{
				printf("AS %d\t제품명: %s\n", i + 1, pAS[i].product);
				printf("\t날짜: %d\n", pAS[i].date);
				printf("\t고객명: %s\n", pAS[i].client);
				printf("\t전화번호: %s\n", pAS[i].tel);
				printf("\n");
			}
		}
		break;
	case 3:
		printf("고객명? ");
		gets_s(client);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(client, pAS[i].client) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, pAS[i].product);
				printf("\t날짜: %d\n", pAS[i].date);
				printf("\t고객명: %s\n", pAS[i].client);
				printf("\t전화번호: %s\n", pAS[i].tel);
				printf("\n");
			}
		}
		break;
	case 4:
		printf("전화번호? ");
		gets_s(tel);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(tel, pAS[i].tel) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, pAS[i].product);
				printf("\t날짜: %d\n", pAS[i].date);
				printf("\t고객명: %s\n", pAS[i].client);
				printf("\t전화번호: %s\n", pAS[i].tel);
				printf("\n");
			}
		}
		break;
	}

}