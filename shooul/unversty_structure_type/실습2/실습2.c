//#include <iostream>
#include <stdio.h>
#include <string.h>
struct date {
	int year; //년
	int month; //월
	int day; //일

};

struct account
{
	struct date openDate; //계좌 개설일자  sizeof()=12
	char		name[12];		 // 계좌주 이름 sizeof()=12;
	int			accountNumber;  // 계좌번호
	double		balance;  //잔고 sizeof()=8
};


void main()
{
	struct account mine = { {2022,9,19},"고박사",1000,300000 };
	printf("구조체 크기 : %d\n", sizeof(mine));
	printf("계좌 개설일자 : %d년 %d월 %d일\n",mine.openDate.year, mine.openDate.month,mine.openDate.day);
	printf("%s %d %.2f\n", mine.name, mine.accountNumber, mine.balance);

	
}