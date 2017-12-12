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

    complex sin(const complex c){
        //computes sin using sin(a + bi) = sin(a)cosh(b) + cos(a)sinh(b)i
        double real_component = sin(complex::real(c))) * cosh(complex::imag(c));
        double imag_component = cos(complex::real(c)) * sinh(complex::imag(c));
        
        complex sin_of_comp(real_component, imag_component);
        return sin_of_comp;
    }
    complex cos(const complex c){
        //computes cos using cos(a + bi) = cos(a)cosh(b) - i*sin(a)sinh(b)
        double real_component = cos(complex::real(c))) * cosh(complex::imag(c));
        double imag_component = -1 * sin(complex::real(c)) * sinh(complex::imag(c));

        complex cos_of_comp = new complex(real_component, imag_component);
        return cos_of_comp;
    }
    complex tan(const complex c){
        //calculate return value by calling other functions in the library                 
        return complex::sin(c) / complex::cos(c);	
`   };

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
