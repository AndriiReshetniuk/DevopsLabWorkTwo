#include <cmath>
#include <iostream>
#include "../Calculation.h"
int main(int argc, char* argv[])
{
Calculation calculation;
double x = 0.9;
int n = 5;
if(std::fabs(calculation.FuncA(x, n) - 0.813205) < 1e-3)
	return 0;
return 1;
}

