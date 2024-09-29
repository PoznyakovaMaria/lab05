#include <locale.h>      
#include <stdio.h> 
#include <math.h>
#define _USE_MATH_DEFINES


void numbr0()
{
	double res1, res2, res3, res4, res5, result, y = 3, x = 1;
	setlocale(LC_ALL, "RUS");
	res1 = 0.5 * y;
	res2 = pow(x, res1);
	res3 = sin(res2);
	res4 = y + 8e-4;
	res5 = pow(res4, 1 / 5.f);
	result = res3 + res5;
	printf("ответ: %.3f", result);

}