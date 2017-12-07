#include "../complex.h";
//Author: Jared
//Purpose: Returns the magnitude of a complex number.
double abs(const complex comp)
{
  double r = real(pow(comp, 2));
  double i = imag(pow(comp, 2));
  return real(sqrt(r + i));
}
