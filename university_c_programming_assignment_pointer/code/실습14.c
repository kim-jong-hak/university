#include <stdio.h>


int sumarr(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += *arr++;

	}
	return sum;
}



void main() 
{
	int sum = 0;
	int score[] = { 95,88,76,54,85,33,65,78,99,82 };
	int* address = score;
	int arrlength = sizeof(score) / sizeof(int);
	for(int i=0;i<arrlength; ++i)\
	{
		sum += *address++;

	}
	printf("메인에서 구한 합은 %d\n", sum);
	address = score;

	printf("함수 sumarr() 호출로 구한 합은 %d\n", sumarr(score, arrlength));
	printf("함수 sumarr() 호출로 구한 합은 %d\n", sumarr(&score[0], arrlength));
	printf("함수 sumarr() 호출로 구한 합은 %d\n", sumarr(score, arrlength));

	return 0;
}