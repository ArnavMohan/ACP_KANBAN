//Author: Benji
//Operator: /
//Purpose: Divide complex numbers
#include complex.h
#include <cmath>

complex operator/(const complex &lhs, const complex &rhs){
    // uses formula from http://mathworld.wolfram.com/ComplexDivision.html
      double resulting_real = (real(&rhs)*real(&lhs) + imag(&rhs)*imag(&lhs))/(pow(real(&lhs),2) + pow(imag(&lhs),2));
      double resulting_imag = (imag(&rhs)*real(&lhs) + real(&rhs)*imag(&lhs))/(pow(real(&lhs),2) + pow(imag(&lhs),2));
      complex final = new complex(resulting_real, resulting_imag);
      return final;
}

void operator/=(const complex &lhs, const complex &rhs){
    
}
