//Author: Rishi
//Operator: *
//Purpose: return the product of two complex numbers
//FOILS it out

#include "../complex.h"

complex operator*(const complex &lhs, const complex &rhs){
  	//foil out the two sides into First, Outisde, Inside, Last.
	double first_foil = real(&lhs) * real(&rhs);
	double outisde_foil = real(&lhs) * imag(&rhs);
	double inside_foil = imag(&lhs) * real(&rhs);
	double last_foil = imag(&lhs) * imag(&rhs);
	
	//product refers to the product of the two params
	//it's the item to be returned
	double product_real = first_foil - last_foil;
	double product_imag = outside_foil + inside_foil;
	
	complex product = new complex(product_real, product_imag);
	return product; 
}
