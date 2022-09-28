#include <stdio.h>

int main()
{
	int aa = 4;
	int bb = 1;
	for (int i = 5; i > 0; i--) {
		
		for (int a = 0; a < aa; a++)
		{
			printf(" ");
		}
		for (int b = 0; b < bb; b++)
		{
			printf("*");
		}
		bb++;
		aa--;
		printf("\n");
	}
	/*
	for (int a = 0; a < 5;++a)
	{
	for (int x = aa; x < 5; ++x)
	printf(" ");

	for (int x = 0; x <= aa; ++x)
	printf("*");*/

}