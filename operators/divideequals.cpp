//Author: Benji
//Operator: /
//Purpose: Divide complex numbers
#include "complex.h"

void operator/=(const complex &lhs, const complex &rhs){
      complex final = &lhs / &rhs;
      lhs = final;
}
