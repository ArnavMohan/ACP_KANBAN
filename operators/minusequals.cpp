#include "complex.h";
//Author: Jared
//Operator: -
//Purpose: Subtracts two complex numbers and sets the first complex number to the result.
complex operator-=(const complex &rhs)
{
      //new complex type initialized with real and imaginary parts
      //return that complex number
      complex final;
      real(final) = re - real(&rhs);
      imag(final) = im - imag(&rhs);
      return final;
}
