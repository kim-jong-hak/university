#include <stdio.h>

void main() {

	char* pa = (char*)100;
	int* pb = (int*)100;
	double* pc = (double*)100;

	printf("char : %p %p %p\n", pa - 1, pa, pa + 1);
	printf("int : %p %p %p\n", pb - 1, pb, pb + 1);
	printf("double : %p %p %p\n", pc - 1, pc, pc + 1);

}