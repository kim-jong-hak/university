//#include <iostream>
#include <stdio.h>
#include <string.h>
	
enum EXPENSE {ENTERTAINMENT, AUTOMOBILE ,UTILITIES,FOOD,CLOTHING,MISCELLANEOUS};
typedef enum EXPENSE EXPENSE;

char* exp[] = { "문화비","자동차유지비","공과금","식비","의생활비","기타" };

void main()
{
	EXPENSE expType;
	int money[] = { 240000,340000,153000,267000,300000,257000 };

	puts("2022년 9월 지출 내역*");
	for (expType = ENTERTAINMENT; expType <= MISCELLANEOUS; expType = (EXPENSE)(expType + 1))
	{
		printf("%12s : %6d\n", exp[expType], money[expType]);
	}
	
}
