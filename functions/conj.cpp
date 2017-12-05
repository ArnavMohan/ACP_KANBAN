#include "../complex.h"

//Author: Rishi
//Function: conjugate
//Purpose: Returns the conjugate of the input complex number. 
//The conjugate is just the regular with different signs on the real part and the imaginary part

using namespace std;

complex conj(const complex input_complex){
  complex final = new complex(-1*real(input_complex), -1*imag(input_complex));
  return final;
}
