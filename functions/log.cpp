//Author: Arnav
//Operator: log
#include "complex.h"
using namespace std;
complex log(const complex& x){
	if(x.imag() == 0 && x.real() <= 0){
		//ERROR
	}
	double arg = acos(x.real()/abs(x));
	if(arg > M_PI){
		arg = 2*M_PI - arg;
	}
	complex result;
	result.re = log(abs(x));
	result.im = arg;
	return result;
}
