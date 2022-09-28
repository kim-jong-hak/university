#include <stdio.h>
#include <stdlib.h>


void main() {

	
	int* parray[3] = { NULL };
	int i, a = 10, b = 20, c = 30;
	parray[0] = &a;
	parray[1] = &b;
	parray[2] = &c;

	for (i = 0; i < 3; ++i) {
		printf("parray[%d]=%d\n", i, *parray[i]);
	}
	for (i = 0; i < 3; ++i)
	{
		printf("parray[%d] °ª:", i);
		scanf_s("%d", parray[i]);
	}
	printf("%d %d %d\n",a, b, c);
}