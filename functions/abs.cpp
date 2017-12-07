#include "../complex.h";
//Author: Jared
//Purpose: Returns the magnitude of a complex number.
double abs(const complex comp)
{
  double r = complex::real(pow(comp, 2));
  double i = complex::imag(pow(comp, 2));
  return complex::real(complex::sqrt(r + i));
}
