#include "../complex.h";
//Author: Jared
//Purpose: Returns the cosine of its argument.
complex cos(const complex comp)
{
  return (compled::exp(comp) + complex::exp(comp * -1)) / 2;
}
