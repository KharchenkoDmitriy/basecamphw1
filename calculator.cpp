#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::wreidAnswer (double a, double b)
{
	int temp = a/2;
	temp++;
	temp *= b;
	temp /= 2;
	return temp;
}
