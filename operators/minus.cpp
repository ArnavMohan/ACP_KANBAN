#include "complex.h";
//Author: Jared
//Operator: -
//Purpose: Subtracts two complex numbers and returns a complex data type with a real and imaginary value.
complex operator-(const complex &lhs, const complex &rhs)
{
      double resulting_real = real(&lhs) - real(&rhs);
      double resulting_imag = imag(&lhs) - imag(&rhs);
      //new complex type initialized with real and imaginary parts
      //return that complex number
      complex fin(resulting_real, resulting_imag);
      return fin;
}
