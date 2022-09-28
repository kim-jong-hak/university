#include <stdio.h>

int main()
{
	int tow_date_number= 1;
	int three_date_number = 5;
	for (int oue_date = 5; oue_date > 0; oue_date--) {

		for (int tow_date = 0; tow_date < tow_date_number; tow_date++)
		{
			printf(" ");
		}
		for (int three_date = 0; three_date < three_date_number; three_date++)
		{
			printf("*");
		}
		three_date_number--;
		tow_date_number++;
		printf("\n");
	}
	
}