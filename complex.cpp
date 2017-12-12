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
    complex acos(const complex comp)
    {
        double negate = double(comp < 0);
        double r = complex::real(complex::abs(comp));
        double i = complex::imag(complex::abs(comp));
        double ret = -0.0187293;
        double iret = -0.0187293;
        ret = ret * r;
        iret = iret * i;
        ret = ret + 0.0742610;
        iret = iret + 0.0742610;
        ret = ret * r;
        iret = iret * i;
        ret = ret - 0.2121144;
        iret = iret - 0.2121144;
        ret = ret * r;
        iret = iret * i;
        ret = ret + 1.5707288;
        iret = iret + 1.5707288;
        ret = ret * sqrt(1.0-r);
        iret = iret * sqrt(1.0-i);
        ret = ret - 2 * negate * ret;
        iret = iret - 2 * negate * iret;
        complex::real(comp) = ret;
        complex::imag(comp) = iret;
        return comp;
    }
    ////////////////////////////
    //exponentiation functions//
    ////////////////////////////

    complex pow(const complex b, const complex exp);
    complex pow(double b, const complex exp);
    complex pow(const complex b, double exp);
    complex pow(const complex b, int exp);
    complex pow (const complex b, int exp)
    {
        for (int i = 0; i < exp; i++)
        {
        complex::real(b) *= complex::real(b);
        }
        if (exp % 4 == 3)
        {
        complex::imag(b) *= -1;
        }
        else if (exp % 4 == 2)
        {
        complex::imag(b) = -1;
        }
        else if (exp % 4 == 1)
        {
        complex::imag(b) *= 1;
        }
        else if (exp % 4 == 0)
        {
        complex::imag(b) = 1;
        }
        return b;
    }
    
    complex exp(const complex);
    
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
    
    complex operator-=(const complex &lhs, const complex &rhs);
    complex operator-=(const complex &rhs)
    {
        //new complex type initialized with real and imaginary parts
        //return that complex number
        complex final;
        real(final) = re - real(&rhs);
        imag(final) = im - imag(&rhs);
        return final;
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
