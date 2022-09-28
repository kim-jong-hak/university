#include <stdio.h>


void add(double* result, double a, double b) {
	*result = a + b;	

}
void subtract(double* result, double a, double b)
{
	*result = a - b;

}
void multiply(double* result, double a, double b)
{
	*result = a * b;

}
void devide(double* result, double a, double b)
{
	*result = a / b;

}


void main() 
{
	double a=0, b=0, result = 0;
	char oper[4] = { '+','-','*','/' };
	void (*pfuncarr[4])(double*, double, double) ={add,subtract,multiply,devide};
	printf("사칙연산을 수행할 실수 2개를 입력하세요 :");
	scanf_s("%lf %lf", &a, &b);
	for (int i = 0; i < 4; ++i) {
		pfuncarr[i](&result, a, b);
		printf("%.1lf %c %.1lf=%.1lf\n", a, oper[i], b, result);
	}

	

	return 0;
}