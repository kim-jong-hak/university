#include <stdio.h>
#include <stdlib.h>


void main() {

	int a[] = { 1,2,3,4,5 };
	int* pa = a;

	int arr[][4] = { 1,2,3,4,5,6,7,8 };
	int(*parr)[4] = arr;

	printf(" %d %d\n", *(pa + 1), *(pa + 4));
	printf("%d %d\n", pa[0], pa[4]);
	printf("sizeof(a)=%d, sizeof(pa)=%d\n", sizeof(a), sizeof(pa));

	printf("%d %d\n", **arr, **parr++);
	printf("%d %d\n", **(arr + 1), **(parr++));
	parr = arr;
	printf("%d %d\n", *(arr[1] + 1), *(parr[1] + 1));
	printf("%d %d\n", *(*(arr + 1)+3), *(* (parr++)+3));
	printf("sizeof(arr)=%d, sizeof(ptrarr)=%d\n", sizeof(arr), sizeof(parr));

}