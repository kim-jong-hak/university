#include <stdio.h>

void main() {
	char a = 'k';
	int b = 86;
	double c = 12.26;

	char* pA = &a;
	int* pB = &b;
	double* pc = &c;

	printf("a의 값 : %c\n",a);
	printf("a의 주소 값 : %p\n", &a);
	printf("a의 주소 값 : %p\n", pA);
	printf("변수 a의 크기 : %d\n", sizeof(a));
	printf("포인터 변수 pA의 크기 : %d\n", sizeof(pA));

	printf("b의 값 : %d\n", b);
	printf("a의 주소 값 : %p\n", &b);
	printf("a의 주소 값 : %p\n", pB);
	printf("변수 a의 크기 : %d\n", sizeof(b));
	printf("포인터 변수 pA의 크기 : %d\n", sizeof(pB));

	printf("b의 값 : %d\n", c);
	printf("a의 주소 값 : %p\n", &c);
	printf("a의 주소 값 : %p\n", pc);
	printf("변수 a의 크기 : %d\n", sizeof(c));
	printf("포인터 변수 pA의 크기 : %d\n", sizeof(pc));


	

}