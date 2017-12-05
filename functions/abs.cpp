#include "../complex.h";
//Author: Jared
//Purpose: Returns the magnitude of a complex number.
double abs(const complex &comp)
{
  double r = real(&comp);
  double i = imag(&comp);
  return sqrt(pow(r) + pow(i));
}
