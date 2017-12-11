#include "../complex.h"
#include <math.h>
//Author: Rishi
//Function: pow
//Purpose: Raises the double to the complex number

using namespace std;

complex pow(double b, const complex exp){
	//computes the exponentiation by using b^(exp_re + exp_im i) = 
			//b^exp_re * (cos( exp_im*ln(b) )  +  i sin( exp_im*ln(b) )
			//double times a complex number, distribute
	double distribution_scalar = pow(b, complex::real(exp)); //uses pow(double b, double exp) from math.h 
	double real_component = distribution_scalar * cos( complex::imag(exp) * log(b) );  //uses log as ln from math.h
	double imag_component = distribution_scalar * sin( complex::imag(exp) * log(b) );  //uses log as ln from math.h
	
	complex final_value(real_component, imag_component);
	return final_value;
}
