#include "../complex.h"
// Computes log base 10 of complex number using base conversion
complex log10*(const complex n)
{
	complex logb10 = log(n)/log(10);
	return logb10;
}