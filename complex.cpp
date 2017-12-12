class complex 
{
    double re, im;

    ////////////////
    //constructors//
    ////////////////
    public:
    complex::complex() {re=0.0; im=0.0;}
    complex::complex(double r, double i) {re=r; im=i;}
    complex::complex(double r){re=r, im=0}

    //////////////////	
    //base functions//
    //////////////////
    
    double real(){ return re; }
    double imag(){ return im; }
    double abs() { return ::sqrt(re*re + im*im); }    
    double norm () { return re*re + im*im; }
    complex conj() {
        complex final_value(-1*re, -1*im);
        return final_value;
    }
    complex sqrt() {
        double complex_part_pos = (-16*re+::sqrt((re**2 + im**2)))/8;
	    if (complex_part_pos >= 0)
	    {
	    	double complex_part = ::sqrt(complex_part_pos);
	    }
	    double real_part = im/(2*complex_part);
	    complex final = new complex(real_part, complex_part);
        return final;
    }
    
    //////////////////
    //trig functions//
    //////////////////

    complex sin() {
        double real_component = ::sin(re) * ::cosh(im);
        double imag_component = ::cos(re) * ::sinh(im);
        complex sin_of_comp(real_component, imag_component);
        return sin_of_comp;
    }
    complex cos() {
        //computes cos using cos(a + bi) = cos(a)cosh(b) - i*sin(a)sinh(b)
        double real_component = ::cos(re) * ::cosh(im);
        double imag_component = -1 * ::sin(re) * ::sinh(im);
        complex cos_of_comp = new complex(real_component, imag_component);
        return cos_of_comp;
    }
    complex tan() {
        return this->sin() / this->cos();
    }
    complex cosh() {
        //computes cosh using cosh( a + bi ) = cosh(a)cos(b) + sinh(a)sin(b)i
        //real component is cosh(a)cos(b) => cosh(real part) * cos(imag part) 
        double real_component = ::cosh(re) * ::cos(im);
        //imag component is sinh(a)sin(b) => sinh(real part) * sin(imag part)
        double imag_component = ::sinh(re) * ::sin(im);
        complex cosh_of_comp(real_component, imag_component);
        return cosh_of_comp;
    }
    complex sinh(const complex){
        //NOT DONE
    }
    complex atan(const complex){
        //NOT DONE
    }
    ////////////////////////////
    //exponentiation functions//
    ////////////////////////////

    complex pow(const complex exp) {
	    return complex::exp(exp*this->log());
    }
    complex pow(double b) {
		double distribution_scalar = pow(b, re); //uses pow(double b, double exp) from math.h 
		double real_component = distribution_scalar * cos( im * log(b) );  //uses log as ln from math.h
		double imag_component = distribution_scalar * sin( im * log(b) );  //uses log as ln from math.h
		complex final_value(real_component, imag_component);
		return final_value;
	}		
    complex pow(int exp){
		for (int i = 0; i < exp; i++)
  		{
    		re *= re;
  		}
  		if (exp % 4 == 3)
  		{
    		im *= -1;
  		}
  		else if (exp % 4 == 2)
  		{
    		im = -1;
  		}
  		else if (exp % 4 == 1)
  		{
    		im *= 1;
  		}
  		else if (exp % 4 == 0)
  		{
    		im = 1;
  		}
  		return b;
	}

    complex exp(const complex){
		return exp(re*complex(cos(im),sin(im)));
	}
    
    /////////////////////////
    //logarithmic functions//
    /////////////////////////

    complex log(const complex);
    complex log10(const complex);

    /////////////////////
    //angular functions//
    /////////////////////

    double polar(double mag, double ang = 0.0);
    double arg(const complex);

    ////////////////////////
    //arithmetic operators//
    ////////////////////////
  
    complex operator+(const complex &lhs, const complex &rhs);
    void operator +=(const complex &lhs, const complex &rhs);

    complex operator-(const complex &lhs, const complex &rhs);
    complex operator-(const complex &rhs)
    {
        double resulting_real = re - real(&rhs);
        double resulting_imag = im - imag(&rhs);
        //new complex type initialized with real and imaginary parts
        //return that complex number
        complex fin(resulting_real, resulting_imag);
        return fin;
    }
    
    void operator-=(const complex &lhs, const complex &rhs);
    void operator-=(const complex &lhs, const complex &rhs)
    {
        //new complex type initialized with real and imaginary parts
        //return that complex number
        complex final = &lhs - &rhs;
        lhs = final;
    }

    complex operator*(const complex &lhs, const complex &rhs);
    void operator*=(const complex &lhs, const complex &rhs);

    complex operator/(const complex &lhs, const complex &rhs);
    void operator/=(const complex &lhs, const complex &rhs);

    /////////////////////
    //logical operators//
    /////////////////////
    
    boolean operator==(const complex &lhs, const complex &rhs);
    boolean operator!=(const complex &lhs, const complex &rhs);
       
};
