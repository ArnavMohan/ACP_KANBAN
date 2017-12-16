#include "../complex.h"
#include <math.h>
//author: abhijay
complex sqrt(const complex& n)
{
	double complex_part_pos = (-16*complex::real(n)+sqrt((complex::real(n)**2 + complex::imag(n)**2)))/8;
	if (complex_part_pos >= 0)
	{
		double complex_part = sqrt(complex_part_pos);
	}
	double real_part = complex::imag(n)/(2*complex_part);
	complex final = new complex(real_part, complex_part);
}
