#include <stdio.h>
#include <stdbool.h>
void revolutin_main(revolution,revolution2,change);

int main() 
{
	int oue_date_number = 10;
	int revolution[2] = {1 ,5};
	bool revolution_switch = false;
	
		for (int oue_date = 0; oue_date < oue_date_number; oue_date++)
		{

			for (int y = 0; y < 1; y++)
			{		
					revolutin_main(revolution[0], revolution[1],revolution_switch);
					revolutin_main(revolution[1], revolution[0],revolution_switch);
			}

			for (int run = 0; run < 2; run++)
			{
				if (run == 0)
					revolution[0]++;
				if (run == 1)
					revolution[1]--;
			}
			printf("\n");
			/// <summary>
			/// /////////////////////// ↓ 두 번째 라인을 위해 초기화
			/// </summary>
			/// <returns></returns>
			if ( oue_date==4)
			{
				revolution[0] = 1;
				revolution[1] = 5;
				revolution_switch = true;
			}		
		}
	return 0;
}

void revolutin_main(int revolution, int revolution2,bool change)
{
	if (change == false)
	{
		for (int revolution_one_date = 0; revolution_one_date < revolution; revolution_one_date++)
		{
			printf("*");
		}
		for (int revolutin_two_date = 0; revolutin_two_date < revolution2; revolutin_two_date++)
		{
			printf(" ");
		}
	}
	else if(change == true)
	{
		for (int revolutin_two_date= 0; revolutin_two_date < revolution2; revolutin_two_date++)
		{
			printf(" ");
		}
		for (int revolution_one_date= 0; revolution_one_date < revolution; revolution_one_date++)
		{
			printf("*");
		}

	}

}