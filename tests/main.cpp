#include <cmath>
#include <cstdlib>
#include <iostream>
#include "../Calculation.h"
#include <chrono>
int main(int argc, char* argv[])
{
Calculation calculation;
double x = 0.9;
int n = 5;
if(std::fabs(calculation.FuncA(x, n) - 0.813205) < 1e-3)
{
        auto t1 = std::chrono::high_resolution_clock::now();
	system("curl -i -X GET 127.0.0.1:8081/compute");
        auto t2 = std::chrono::high_resolution_clock::now();
        auto int_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1);
        int iMS = int_ms.count();
	if(iMS > 5000 && iMS < 20000)
        {
	return 0;
        }
}
return 1;

}

