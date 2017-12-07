#include "complex.h";
//Author: Jared
//Operator: -
//Purpose: Subtracts two complex numbers and sets the first complex number to the result.
void operator-=(const complex &lhs, const complex &rhs)
{
      //new complex type initialized with real and imaginary parts
      //return that complex number
      complex final = &lhs - &rhs;
      lhs = final;
}
