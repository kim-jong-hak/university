#include <stdio.h>

int main()
{
	// x_axis 의 값을 임의로 정한다면 라인에 맞게 피라미드가 만들어집니다.
	int x_axis = 9;
	int y_axis = 1;
	int star[2] = { x_axis,1 };
	void change(x_line, y_line, change);

	for (int one_date = x_axis; one_date > 0; one_date--)
	{
		for (int two_date = 0; two_date < y_axis; two_date++)
		{
			
				change(star[0], star[1]);
			
			
		}
		if (one_date > 5)
		{
			star[0]--;
			star[1] = star[1] + 2;

		}
		else {
			star[0]++;
			star[1] = star[1] - 2;
		}
		printf("\n");
	}

	return 0;
}


void change(int x_line, int y_line)
{

	for (int one_date = 0; one_date < x_line; one_date++)
	{
		printf(" ");
	}
	for (int two_date = 0; two_date < y_line; two_date++)
	{
		printf("*");
	}

}
