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

char* LectureType[] = { "���","�Ϲݼ���","�����ʼ�","��������" };
char* head[] = { "C���α׷���","���±���","����","���"};

void main()
{
	Lecture course[] = { {"�ΰ��� ��ȸ",0,2,2}, 
						{"�����а���",1,3,3},
						{"�ڷᱸ��",2,3,3},
						{"��������α׷���",2,3,4},
						{"��� C���α׷���",3,3,4}};
	
	

	int arrSize = sizeof(course) / sizeof(course[0]);
	printf("�迭 ũ�� : %d\n\n", arrSize);
	printf("%16s %10s %5s %5s\n", head[0], head[1], head[2], head[3]);
	for (int i = 0; i < arrSize; i++)
	{
		printf("%16s %10s %5d %5d\n", course[i].name, LectureType[course[i].type], course[i].score, course[i].hours);
	}
}
