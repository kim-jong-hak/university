//#include <iostream>
#include <stdio.h>
#include <string.h>
	
struct Date
{
	int year;
	int month;
	int day;
};
typedef struct Date Date;

typedef struct
{
	char title[30];
	char company[30];
	char kinds[30];
	Date release;

} Software;

void main()
{
	Software visualstudio = { "Visual studio","Microsoft","���հ���ȯ��",{1997,3,19} };
	printf("��ǰ��\t%s\n", visualstudio.title);
	printf("ȸ��\t%s\n", visualstudio.company);
	printf("����\t%s\n", visualstudio.kinds);
	printf("�����\t%d, %d, %d\n", visualstudio.release.year, visualstudio.release.month, visualstudio.release.day);
}
