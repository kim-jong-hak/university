//#include <iostream>
#include <stdio.h>
#include <string.h>
	
enum EXPENSE {ENTERTAINMENT, AUTOMOBILE ,UTILITIES,FOOD,CLOTHING,MISCELLANEOUS};
typedef enum EXPENSE EXPENSE;

char* exp[] = { "��ȭ��","�ڵ���������","������","�ĺ�","�ǻ�Ȱ��","��Ÿ" };

void main()
{
	 enum COLOR{YELLOW=3, RED, BLUE, MAGENTA,GREEN}color;
	 for (color = YELLOW; color <= GREEN; color = (enum COLOR)(color + 1))
	 {
		 printf("-%d-", GREEN);
		 printf("%d\n", color);
	 }
}
