#include "../complex.h"
#include <math.h>
//author: abhijay
// Computes log base 10 of complex number using base conversion
complex log10*(const complex& n)
{
	complex lg = new complex (log(10));
	complex logb10 = complex::real(complex::log(n))/lg;
	return logb10;
}
