#include <stdio.h>

void main() {

	char a = 'k';
	int b = 86;
	char* pa = &a;
	int* pb = &b;

	printf("직접참조 출력: %c %d\n", a, b);
	printf("간접참조 출력: %c %d\n", *pa, *pb);

	*pa = 'H';
	*pb = 21;
	
	printf("직접참조 출력 : %c %d\n", a, b);
	printf("간접참조 출력 : %c %d\n", *pa, *pb);


	

}