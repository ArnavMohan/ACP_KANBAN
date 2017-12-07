//Author: Rishi
//Operator: *=
//Purpose: sets left hand side complex number
//		to the product of the left side and the right side

#include "../complex.h"


//uses the * operator included from the complex.h header
void operator*=(const complex &lhs, const complex &rhs){
	
	complex product = lhs * rhs; 
	lhs = product;

}
