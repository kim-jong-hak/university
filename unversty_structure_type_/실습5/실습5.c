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
	Software visualstudio = { "Visual studio","Microsoft","통합개발환경",{1997,3,19} };
	printf("제품명\t%s\n", visualstudio.title);
	printf("회사\t%s\n", visualstudio.company);
	printf("종류\t%s\n", visualstudio.kinds);
	printf("출시일\t%d, %d, %d\n", visualstudio.release.year, visualstudio.release.month, visualstudio.release.day);
}
