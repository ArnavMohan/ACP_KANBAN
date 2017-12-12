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
    
    double real(const complex&);
    double imag(const complex&);
    double abs(const complex);    
    double norm (const complex);
    complex conj(const complex);
    complex sqrt(const complex);

    //////////////////
    //trig functions//
    //////////////////

    complex sin(const complex);
    complex cos(const complex);
    complex tan(const complex);

    complex cosh(const complex);
    complex sinh(const complex);
    complex sinh(const complex)
    {
        return sinh(real(complex))*cos(imag(complex)) + pow(-1, .5)*cosh(real(complex))*sin(imag(complex));
    }

    complex asin(const complex);
    complex acos(const complex);
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
    
    complex atan(const complex);

    ////////////////////////////
    //exponentiation functions//
    ////////////////////////////

    complex pow(const complex b, const complex exp);
    complex pow(double b, const complex exp);
    complex pow(const complex b, double exp);
    complex pow(const complex b, int exp);

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
