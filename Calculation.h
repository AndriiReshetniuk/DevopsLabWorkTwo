#ifndef Calculation_h
#define Calculation_h

class Calculation //class which contain metod to find arsh(x)
{
public:
Calculation(){} //constructor
virtual ~Calculation() {} // destructor
double FuncA(double x, int n); //function to find arsh(x) n -- count of elements x has to be less than 1
};
#endif

