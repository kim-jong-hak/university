#include <stdio.h>

void main() {

	char a = 'k';
	int b = 86;
	char* pa = &a;
	int* pb = &b;

	printf("�������� ���: %c %d\n", a, b);
	printf("�������� ���: %c %d\n", *pa, *pb);

	*pa = 'H';
	*pb = 21;
	
	printf("�������� ��� : %c %d\n", a, b);
	printf("�������� ��� : %c %d\n", *pa, *pb);


	

}