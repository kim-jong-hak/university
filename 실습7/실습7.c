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
	Lecture course[] = { {"인간과 사회",0,2,2}, 
						{"경제학개론",1,3,3},
						{"자료구조",2,3,3},
						{"모바일프로그래밍",2,3,4},
						{"고급 C프로그래밍",3,3,4}};
	
	

	int arrSize = sizeof(course) / sizeof(course[0]);
	printf("배열 크기 : %d\n\n", arrSize);
	printf("%16s %10s %5s %5s\n", head[0], head[1], head[2], head[3]);
	for (int i = 0; i < arrSize; i++)
	{
		printf("%16s %10s %5d %5d\n", course[i].name, LectureType[course[i].type], course[i].score, course[i].hours);
	}
}
