#include <stdio.h>

void main()
{
	char a;

	printf("�Է� : ");
	scanf("%c", &a);

	switch (a){
	case 'a':
	case 'A': printf("��� : 4.0\n");
		break;
	case 'b':
	case 'B': printf("��� : 3.0\n");
		break;
	case 'c':
	case 'C': printf("��� : 2.0\n");
		break;
	case 'd':
	case 'D': printf("��� : 1.0\n");
		break;
	case 'f':
	case 'F': printf("��� : 0.0\n");
		break;
	default: printf("�߸��� ������ �Է��ϼ̽��ϴ�.\n");
	}
	

}