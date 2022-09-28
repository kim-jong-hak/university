#include <stdio.h>

void main() {

	int a[4] = { 1,2,3,4 };
	int* pa = &a[0];

	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	printf("%d %d %d %d\n",* (pa), *(pa + 1), *(pa + 2), *(pa + 3));
	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);

	printf("\n\n");
	printf("++(*pa)=%d\n", ++(*pa));
	printf("*(++pa)=%d\n", *(++pa));
	printf("*(pa++)=%d\n", *(pa++));
	printf("--(*(pa++))=%d\n", --(*(pa++)));
	printf("(*pa)-- =%d\n", (*pa)--);
	printf("\n\n");

	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);
}