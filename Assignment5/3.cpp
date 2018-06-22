#include <stdio.h>
void my_toupper_strcpy(char *a, char *b)
{
	int i, count=0;
	for (i = 0; b[i] != '\0'; i++) {
		a[i] = b[i] - 32;
		count++;
	}
	a[count] = NULL;
}

void main()
{
	char A[50], B[50] = "boy";
	my_toupper_strcpy(A, B);
	printf("%s\n", A);
}