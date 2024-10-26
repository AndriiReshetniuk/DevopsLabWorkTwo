#include "Calculation.h"
#include <stdio.h>
int main(int argc, char * argv[])
{
Calculation calculation;
double x = 0.9; 
int n = 5;
printf("%f\n", calculation.FuncA(x, n));
return 0;
}
