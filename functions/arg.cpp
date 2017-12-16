#include "../complex.h>
#include <math.h>
//Author: Abhijay
//Purpose: Return angle of a complex number
//reliances: uses arctan from math.h
double arg(const complex& n)
{
	double angle = atan(complex::imag(n)/complex::real(n));
	return angle;
}
