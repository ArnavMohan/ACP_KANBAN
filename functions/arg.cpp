#include "../complex.h>
#include <math.h>

double arg(const complex& n)
{
	double angle = atan(complex::imag(n)/complex::real(n));
	return angle;
}