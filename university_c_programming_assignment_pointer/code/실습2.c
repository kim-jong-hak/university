#include <stdio.h>

void main() {
	char a = 'k';
	int b = 86;
	double c = 12.26;

	char* pA = &a;
	int* pB = &b;
	double* pc = &c;

	printf("a�� �� : %c\n",a);
	printf("a�� �ּ� �� : %p\n", &a);
	printf("a�� �ּ� �� : %p\n", pA);
	printf("���� a�� ũ�� : %d\n", sizeof(a));
	printf("������ ���� pA�� ũ�� : %d\n", sizeof(pA));

	printf("b�� �� : %d\n", b);
	printf("a�� �ּ� �� : %p\n", &b);
	printf("a�� �ּ� �� : %p\n", pB);
	printf("���� a�� ũ�� : %d\n", sizeof(b));
	printf("������ ���� pA�� ũ�� : %d\n", sizeof(pB));

	printf("b�� �� : %d\n", c);
	printf("a�� �ּ� �� : %p\n", &c);
	printf("a�� �ּ� �� : %p\n", pc);
	printf("���� a�� ũ�� : %d\n", sizeof(c));
	printf("������ ���� pA�� ũ�� : %d\n", sizeof(pc));


	

}