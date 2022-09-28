#include <stdio.h>
void main() {
	int run=90;
	for (int x = 65; x <= 90; x++) 
	{
		printf("%c", x);
		for (int y_1 = 0; y_1 <= (x -55); y_1++) {
			printf(" ");
		}
		for (int y_1 = x; y_1 <=run ; y_1++) 
		{
			
			printf("%c", y_1);
		}
		run--;
	
		printf("\n");
	}



	return 0;
}