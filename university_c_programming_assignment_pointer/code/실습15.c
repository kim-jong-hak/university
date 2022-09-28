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

	printf("+,-�� ������ �Ǽ� 2���� �Է��ϼ��� :");
	scanf_s("%lf %lf", &a, &b);

	pfunc = add;
	pfunc(&result, a, b);
	printf("\n��Ģ���� (+)\n");
	printf("pfunc�� �ּ�\t\t%p\n",pfunc);
	printf("�Լ� add()�� �ּ�\t%p\n",add);
	printf("%.1lf+%.1lf=%.1lf\n", a, b, result);

	pfunc = subtract;
	pfunc(&result, a, b);
	printf("\n��Ģ���� (-)\n");
	printf("pfunc�� �ּ�\t\t%p\n", pfunc);
	printf("�Լ� subtract()�� �ּ�\t%p\n", subtract);
	printf("%.1lf-%.1lf=%.1lf\n", a, b, result);

	

	return 0;
}