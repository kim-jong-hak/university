#include <stdio.h>

void main() {
	char a = 'k';
	int b = 86;
	double c = 12.26;

	printf("a�� ��: %c\n", a);
	printf("a�� �ּ� �� : %p\n", &a);
	
	printf("b�� �� : %d\n", b);
	printf("b�� �ּ� �� : %p\n", &a);

	printf("c�� �� : %lf\n", c);
	printf("c�� �ּ� �� : %p\n", &c);


}