//#include <iostream>
#include <stdio.h>
#include <string.h>
struct Sample01
{
	char a;
	int  b;
};
struct Sample02 
{
	char a;
	char b;
    int  c;
};
struct Sample03
{
	char  a;
	int   b;
	char  c;
};
struct Sample04
{
	char	a;
	double  b;
};
struct Sample05
{
	char    a;
	int		b;
	double  c;
};
void main()
{
	struct Sample01 sample01;
	struct Sample02 sample02;
	struct Sample03 sample03;
	struct Sample04 sample04;
	struct Sample05 sample05;

	printf("Sample01 구조체 크기 : %d\n", sizeof(sample01));
	printf("Sample02 구조체 크기 : %d\n", sizeof(sample02));
	printf("Sample03 구조체 크기 : %d\n", sizeof(sample03));
	printf("Sample04 구조체 크기 : %d\n", sizeof(sample04));
	printf("Sample05 구조체 크기 : %d\n", sizeof(sample05));
}