#include "complex.h"
using namespace std;
//Author: Arnav
//Operator: ==
//Purpose: Check equality between 2 complex numbers
boolean operator==(const complex &lhs, const complex &rhs){
	return (lhs.imag()==rhs.imag() && lhs.real()==rhs.real());
}
