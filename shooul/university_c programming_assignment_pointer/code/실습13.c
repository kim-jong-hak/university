#include <stdio.h>
#define ROW 2
#define COL 3
void main() 
{
	int td[][COL] = { {8,5,4},{2,7,6} };
	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("td[%d][%d]=%d,", i, j, *(*(td + i) + j));
			printf("%d \t", (*(td + i))[j]);
		}
		printf("\n");
	}


	return 0;
}