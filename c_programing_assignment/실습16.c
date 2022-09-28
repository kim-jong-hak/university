#include <stdio.h>
void main() {
	int rut_1 = 65;
	int y=73;
	int rem = 2;
	for (int x = 65; x <= 90; x++) 
	{
		printf("%c    ", x);
		
		
		
			for (int rum=0; rum < ((y - 47) / 3); rum++) {

				for (int rut=0; rut < 3; rut++) {
					printf("%c",rut_1);
				}
				rut_1++;
				
			}
			for (int rem_1 = 0; rem_1 < rem; rem_1++)
			{
				printf("%c", rut_1 );
			}

			if(rem==0)
			{	
				rem=2;
			}
			else {
				rem--;
			}
		rut_1=65;
		
		y--;
		printf("\n");
	}



	return 0;
}