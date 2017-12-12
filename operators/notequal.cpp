//Author: Arnav
//Operator: !=
//Purpose: Check nonequality between 2 complex numbers
#include "complex.h"
using namespace std;
boolean operator!=(const complex &lhs, const complex &rhs){
	return !(lhs == rhs);
}
