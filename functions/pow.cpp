#include "complex.h";
//Author: Jared
//Purpose: Takes two arguments: pow(b, exp). It raises b to the power of exp.
complex pow (const complex &b, int exp)
{
  for (int i = 0; i < exp; i++)
  {
    real(b) *= real(b);
    imag(b) *= imag(b);
  }
  return b;
}
