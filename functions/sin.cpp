#include "../complex.h";
#include <math.h>

//Author: Rishi
//Function: sin
//Purpose: Compute sine of a complex argument

complex sin(const complex input)
{
  //computes sin using sin(a + bi) = sin(a)cosh(b) + cos(a)sinh(b)i
  double real_component = sin(complex::real(input))) * cosh(complex::imag(input));
  double imag_component = cos(complex::real(input)) * sinh(complex::imag(input));

  complex sin_of_comp = new complex(real_component, imag_component);
  return sin_of_comp;
}
