#include <stdio.h>
void main() {
	int y = 65;
	int run = 6;
	for (int x = 65; x <= 90; x++) 
	{
		printf("%c", x);
		for (int n = 0; n < run;n++)
		{
			printf(" ");
		}
		for (int y_1 = y; y_1 <= 90; y_1++) 
		{
			
			printf("%c", y_1);
		}
		y++;
		run++;
		printf("\n");
	}



	return 0;
}