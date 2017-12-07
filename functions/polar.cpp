//Author: Aruav
//Fumction: polar
#include "complex.h"
using namespace std;
complex polar(double mag, double ang=0.0){
	return complex(mag*cos(ang), mag*sin(ang));
}
