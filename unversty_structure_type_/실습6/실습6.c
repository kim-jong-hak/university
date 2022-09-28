//#include <iostream>
#include <stdio.h>
#include <string.h>
	
typedef struct
{
	char name[20];
	int type;
	int score;
	int hours;
} Lecture;

char* LectureType[] = { "고양","일반선택","전공필수","전공선택" };
char* head[] = { "C프로그래밍","강좌구분","점수","사수"};

void main()
{
	Lecture os = { "운영체제",2,3,3 };
	Lecture c = { "C프로그래밍",3,3,4 };
	Lecture* p = &os;

	printf("구조체 크기 : %d, 포인터 크기 : %d\n\n", sizeof(os), sizeof(p));
	printf("%10s %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("%12s %10s %5d %5d\n", p->name, LectureType[p->type], p->score, p->hours);
	p = &c;
	printf("%12s %10s %5d %5d\n", (*p).name, LectureType[(*p).type], (*p).score, (*p).hours);
	printf("%12c %10s %5d %5d\n", *c.name, LectureType[c.type], c.score, c.hours); 
}
