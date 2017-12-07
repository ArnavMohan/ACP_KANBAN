#include "complex.h";
//Author: Jared
//Purpose: Returns the angle whose cosine is its argument.
complex acos(const complex comp)
{
  double negate = double(comp < 0);
  double r = complex::real(complex::abs(comp));
  double i = complex::imag(complex::abs(comp));
  double ret = -0.0187293;
  double iret = -0.0187293;
  ret = ret * r;
  iret = iret * i;
  ret = ret + 0.0742610;
  iret = iret + 0.0742610;
  ret = ret * r;
  iret = iret * i;
  ret = ret - 0.2121144;
  iret = iret - 0.2121144;
  ret = ret * r;
  iret = iret * i;
  ret = ret + 1.5707288;
  iret = iret + 1.5707288;
  ret = ret * sqrt(1.0-r);
  iret = iret * sqrt(1.0-i);
  ret = ret - 2 * negate * ret;
  iret = iret - 2 * negate * iret;
  complex::real(comp) = ret;
  complex::imag(comp) = iret;
  return comp;
}
