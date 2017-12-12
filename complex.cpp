class complex 
{
    double re, im;

    ////////////////
    //constructors//
    ////////////////

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
    complex operator-(const complex &lhs, const complex &rhs)
    {
        double resulting_real = real(&lhs) - real(&rhs);
        double resulting_imag = imag(&lhs) - imag(&rhs);
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
