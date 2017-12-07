#include "../complex.h";
//Author: Jared
//Purpose: Returns the cosine of its argument.
complex cos(const complex comp)
{
  return (exp(comp) + exp(comp * -1)) / 2;
}
