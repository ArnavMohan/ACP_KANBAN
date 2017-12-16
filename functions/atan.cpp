#include complex.h
#include <cmath>
//Author: Benji
//Purpose: returns inverse tangent of a complex number
using namespace std;

complex atan(const complex c){
    //calculate return value
    const complex i(0.0,1.0);
    const complex one(1.0,0.0);
    return log( (one + i * c) / (one - i * c)) / (C(2.0,0.0)*i);
}
