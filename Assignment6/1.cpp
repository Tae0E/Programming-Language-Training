#include <stdio.h>
#include <string.h>

void input(int);
void output(int);
void search(int);

struct AS_INFO {
	char product[20];
	int	 date;
	char client[10];
	char tel[15];
} as[100];

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
	}
}

void input(int id) {
	printf("제품명: ");
	gets_s(as[id].product);
	printf("날짜: ");
	scanf("%d", &as[id].date);
	getchar();
	printf("고객명: ");
	gets_s(as[id].client);
	printf("전화번호: ");
	gets_s(as[id].tel);
	printf("\n");
}

void output(int n) {
	for (int i = 0; i < n; i++) {
		printf("AS %d\t제품명: %s\n", i + 1, as[i].product);
		printf("\t날짜: %d\n", as[i].date);
		printf("\t고객명: %s\n", as[i].client);
		printf("\t전화번호: %s\n", as[i].tel);
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
			if (strcmp(product, as[i].product) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, as[i].product);
				printf("\t날짜: %d\n", as[i].date);
				printf("\t고객명: %s\n", as[i].client);
				printf("\t전화번호: %s\n", as[i].tel);
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
			if (date == as[i].date)
			{
				printf("AS %d\t제품명: %s\n", i + 1, as[i].product);
				printf("\t날짜: %d\n", as[i].date);
				printf("\t고객명: %s\n", as[i].client);
				printf("\t전화번호: %s\n", as[i].tel);
				printf("\n");
			}
		}
		break;
	case 3:
		printf("고객명? ");
		gets_s(client);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(client, as[i].client) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, as[i].product);
				printf("\t날짜: %d\n", as[i].date);
				printf("\t고객명: %s\n", as[i].client);
				printf("\t전화번호: %s\n", as[i].tel);
				printf("\n");
			}
		}
		break;
	case 4:
		printf("전화번호? ");
		gets_s(tel);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(tel, as[i].tel) == 0)
			{
				printf("AS %d\t제품명: %s\n", i + 1, as[i].product);
				printf("\t날짜: %d\n", as[i].date);
				printf("\t고객명: %s\n", as[i].client);
				printf("\t전화번호: %s\n", as[i].tel);
				printf("\n");
			}
		}
		break;
	}
	
}