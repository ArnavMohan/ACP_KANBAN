#include "complex.h"

//Author: Benji
//Function: tan
//Purpose: computes the tangent of a complex number

using namespace std;

complex tan(const complex c){
    //calculate return value by calling other functions in the library
                     
    return complex::sin(c) / complex::cos(c);	
}
