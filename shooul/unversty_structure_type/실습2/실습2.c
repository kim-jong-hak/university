//#include <iostream>
#include <stdio.h>
#include <string.h>
struct date {
	int year; //��
	int month; //��
	int day; //��

};

struct account
{
	struct date openDate; //���� ��������  sizeof()=12
	char		name[12];		 // ������ �̸� sizeof()=12;
	int			accountNumber;  // ���¹�ȣ
	double		balance;  //�ܰ� sizeof()=8
};


void main()
{
	struct account mine = { {2022,9,19},"��ڻ�",1000,300000 };
	printf("����ü ũ�� : %d\n", sizeof(mine));
	printf("���� �������� : %d�� %d�� %d��\n",mine.openDate.year, mine.openDate.month,mine.openDate.day);
	printf("%s %d %.2f\n", mine.name, mine.accountNumber, mine.balance);

	
}