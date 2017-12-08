#include "complex.h";
//Author: Jared
//Purpose: Takes two arguments: pow(b, exp). It raises b to the power of exp.
complex pow (const complex b, int exp)
{
  for (int i = 0; i < exp; i++)
  {
    complex::real(b) *= complex::real(b);
  }
  if (exp % 4 == 3)
  {
    complex::imag(b) *= -1;
  }
  else if (exp % 4 == 2)
  {
    complex::imag(b) == -1;
  }
  else if (exp % 4 == 1)
  {
    complex::imag(b) *= 1;
  }
  else if (exp % 4 == 0)
  {
    complex::imag(b) == 1;
  }
  return b;
}
