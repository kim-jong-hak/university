#include <stdio.h>

int main()
{

	// x_axis �� ���� ���Ƿ� ���Ѵٸ� ���ο� �°� �Ƕ�̵尡 ��������ϴ�.
	int x_axis =5;
	int y_axis = 1;
	int star[2] = {x_axis,1};
	void change(x_line, y_line, change);

	for (int one_date = x_axis; one_date > 0; one_date--)
	{
		for(int two_date=0;two_date<y_axis;two_date++)
		{
			change(star[0], star[1]);
		}
		star[0]--;
		star[1] = star[1] + 2;
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