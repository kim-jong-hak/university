#include <stdio.h>


void add(double* result, double a, double b) {
	*result = a + b;	

}
void subtract(double* result, double a, double b)
{
	*result = a - b;

}



void main() 
{
	double a, b, result = 0;
	void (*pfunc)(double*, double, double) = NULL;

	printf("+,-를 수행할 실수 2개를 입력하세요 :");
	scanf_s("%lf %lf", &a, &b);

	pfunc = add;
	pfunc(&result, a, b);
	printf("\n사칙연산 (+)\n");
	printf("pfunc의 주소\t\t%p\n",pfunc);
	printf("함수 add()의 주소\t%p\n",add);
	printf("%.1lf+%.1lf=%.1lf\n", a, b, result);

	pfunc = subtract;
	pfunc(&result, a, b);
	printf("\n사칙연산 (-)\n");
	printf("pfunc의 주소\t\t%p\n", pfunc);
	printf("함수 subtract()의 주소\t%p\n", subtract);
	printf("%.1lf-%.1lf=%.1lf\n", a, b, result);

	

	return 0;
}