#include <stdio.h>

void main() {
	char a = 'k';
	int b = 86;
	double c = 12.26;

	printf("a의 값: %c\n", a);
	printf("a의 주소 값 : %p\n", &a);
	
	printf("b의 값 : %d\n", b);
	printf("b의 주소 값 : %p\n", &a);

	printf("c의 값 : %lf\n", c);
	printf("c의 주소 값 : %p\n", &c);


}