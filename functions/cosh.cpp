#include "../complex.h";
#include <math.h>

//Author: Rishi
//Function: cosh
//Purpose: Compute hyperbolic cosine of a complex argument

complex cosh(const complex input)
{
  //computes cosh using cosh( a + bi ) = cosh(a)cos(b) + sinh(a)sin(b)i

  //real component is cosh(a)cos(b) => cosh(real part) * cos(imag part) 
  double real_component = cosh(complex::real(input)) * cos(complex::imag(input));

  //imag component is sinh(a)sin(b) => sinh(real part) * sin(imag part)
  double imag_component = sinh(complex::real(input)) * sin(complex::imag(input));

  complex cosh_of_comp = new complex(real_component, imag_component);
  return cosh_of_comp;
}
