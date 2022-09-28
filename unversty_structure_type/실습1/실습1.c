//#include <iostream>
#include <stdio.h>
#include <string.h>
struct account {
	char name[12];
	int accoutNumber;
	double balance;

};


void main()
{
	struct account mine = { "고박사",1000,300000 };
	struct account yours;

	strcpy_s(yours.name, 12, "Noname");
	yours.accoutNumber = 1001;
	yours.balance = 500000;
	printf("구조체 크기 : %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.accoutNumber, mine.balance);
	printf("%s %d %.2f\n", mine.name, mine.accoutNumber, mine.balance);
}