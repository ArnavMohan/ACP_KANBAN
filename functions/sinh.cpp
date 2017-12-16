#include "complex.h";
//author: jared
complex sinh(const complex)
{
  return sinh(real(complex))*cos(imag(complex)) + pow(-1, .5)*cosh(real(complex))*sin(imag(complex));
}
