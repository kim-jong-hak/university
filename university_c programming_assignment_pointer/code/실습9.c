#include <stdio.h>
#include <stdlib.h>


void allocwithpointer(int* pnew) 
{
	pnew = (int*)malloc(sizeof(int));
}
void allocwithdoublepointer(int** pnew) {
	*pnew = (int*)malloc(sizeof(int));
}


void main() {

	
	int* pa = NULL;
	allocwithdoublepointer(&pa);
	*pa = 100;
	printf("%d\n", *pa);
	free(pa);
}