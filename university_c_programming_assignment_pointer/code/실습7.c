#include <stdio.h>

void main() {

	char a[4] = { 'A','\0','\0','\0' };
	char* pChar = &a[0];
	int* pint = (int*)&a[0];

	printf("%c %d\n", a[0], a[1]);
	printf("%c %d\n", *pChar, *pChar);
	printf("%c %d\n", *pint, *pint);

	printf("char ������ ����\n");
	printf("�ּ� �� : %p %p %p %p\n", pChar, (pChar + 1), (pChar + 2), (pChar + 3));
	printf("�� : %d %d %d %d\n", *pChar, *(pChar + 1), *(pChar + 2), *(pChar + 3));

	printf("int ������ ����\n");
	printf("�ּ� �� : %p %p %p %p\n", pint, (pint + 1), (pint + 2), (pint + 3));
	printf("�� : %d %d %d %d\n", *pint, *(pint + 1), *(pint + 2), *(pint + 3));
}