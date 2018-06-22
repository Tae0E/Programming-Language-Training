#include <stdio.h>

void main()
{
	char a;

	printf("입력 : ");
	scanf("%c", &a);

	switch (a){
	case 'a':
	case 'A': printf("출력 : 4.0\n");
		break;
	case 'b':
	case 'B': printf("출력 : 3.0\n");
		break;
	case 'c':
	case 'C': printf("출력 : 2.0\n");
		break;
	case 'd':
	case 'D': printf("출력 : 1.0\n");
		break;
	case 'f':
	case 'F': printf("출력 : 0.0\n");
		break;
	default: printf("잘못된 정보를 입력하셨습니다.\n");
	}
	

}