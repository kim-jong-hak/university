#include <stdio.h>

void main() {

	int a = 20;
	int* pa = &a;
	int** dpa = &pa;

	printf("%p %p %p\n", &a, pa, *dpa);
	*pa = a + 2;
	printf("%d %d %d\n", a, *pa, **dpa);
	**dpa = *pa + 2;
	printf("%d %d %d\n", a, *pa, **dpa);

}