//Author: Arnav
//Operator: pow
//Purpose: Raise complex # to a complex #
#include "complex.h"
using namespace std;
complex pow(const complex &b, const complex &exp){
	return exp(exp*log(b));
}
