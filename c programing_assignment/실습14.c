#include <stdio.h>
void main() {

	for (int x = 65; x <= 90; x++) 
	{
		printf("%c        ", x);
		for (int y_1 = 65; y_1 <=90 ; y_1++) 
		{
			
			printf("%c", y_1);
		}
		
	
		printf("\n");
	}



	return 0;
}