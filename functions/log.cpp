//Author: Arnav
//Operator: log
#include "complex.h"
using namespace std;
complex log(const complex& x){
	if(complex::imag(x) == 0 && complex::real(x) <= 0){
		//ERROR
	}
	double arg = complex::acos(complex::real(x)/complex::abs(x));
	if(arg > M_PI){
		arg = 2*M_PI - arg;
	}
	complex result;
	result.re = log(abs(x));
	result.im = arg;
	return result;
}
