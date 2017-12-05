#include "../complex.h";
//Author: Jared
//Purpose: Subtracts two complex numbers and returns a complex data type with a real and imaginary value.
double abs(const complex &comp)
{
  double r = real(&comp);
  double i = imag(&comp);
  return sqrt(pow(r) + pow(i));
}
