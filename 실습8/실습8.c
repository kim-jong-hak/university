//#include <iostream>
#include <stdio.h>
#include <string.h>
	
typedef struct
{
	double real;
	double img;

} Complex;

void PrintComplex(Complex complex)
{
	printf("º¹¼Ò¼ö(a+bi)=%.1f+%.lfi\n", complex.real, complex.img);
}

Complex PairComplex1(Complex complex)
{
	complex.img = -complex.img;
	return complex;
}

void PairComplex2(Complex* complex)
{
	complex->img = -complex->img;
}


void main()
{
	Complex complex = { 3.4,4.8 };
	Complex pComplex;

	PrintComplex(complex);

	pComplex = PairComplex1(complex);
	PrintComplex(pComplex);

	PairComplex2(&pComplex);
	PrintComplex(pComplex);
}
