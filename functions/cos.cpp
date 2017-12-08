#include "../complex.h";
#include <math.h>

//Author: Rishi
//Function: cos
//Purpose: Compute cosine of a complex argument

complex cos(const complex input)
{
  //computes cos using cos(a + bi) = cos(a)cosh(b) - i*sin(a)sinh(b)
  double real_component = cos(complex::real(input))) * cosh(complex::imag(input));
  double imag_component = -1 * sin(complex::real(input)) * sinh(complex::imag(input));

  complex cos_of_comp = new complex(real_component, imag_component);
  return cos_of_comp;
}
