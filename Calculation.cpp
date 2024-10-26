#include "Calculation.h"
#include <stdio.h>
#include <math.h>

double fact(int number)
{
int result = 1;
for(int i = 1; i<=number; i++)
{
result *= i;
}
return (double) result;
}

double Calculation::FuncA(double x, int n)
{
double result = 0;
for(int i = 0; i<n; i++)
{
double numerator = pow((-1), i) * fact(2*i);
double elementOfSequence = numerator / (pow(4, i) * pow(fact(i), 2)*(2*i+1)) * pow(x, 2*i+1);
result += elementOfSequence;
}
return result;
}

