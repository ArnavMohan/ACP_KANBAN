#include "../complex.h"
//Author: Abhijay
//Operator: +=
//Purpose: add complex numbers
void operator +=(const complex &lhs, const complex &rhs)
{
      complex final = &lhs + &rhs;
      lhs = final;
}
