class complex 
{
    double re, im;
    complex::complex() {re=0.0; im=0.0;}
    complex::complex(double r, double i = 0.0) {re=r; im=i;}

	
    complex pow(const complex b, const complex exp);

    double norm (const complex);

    double polar(double mag, double ang = 0.0);

    complex log(const complex);

    double arg(const complex);

    complex exp(const complex);

    complex log10(const complex);

    complex sqrt(const complex);

    double abs(const complex);

    complex cos(const complex);

    complex acos(const complex);

    complex pow(const complex b, int exp);

    complex asin(const complex);

    complex pow(dobule b, const complex exp);

    complex tan(const complex);

    complex atan(const complex);

    complex pow(const complex b, double exp);

    complex sin(const complex);

    double real(const complex&);

    double imag(const complex&);

    complex conj(const complex);

    complex operator/(const complex &lhs, const complex &rhs);

    void operator/=(const complex &lhs, const complex &rhs);

    complex exp(const complex& x)

    complex operator-(const complex &lhs, const complex &rhs);

    void operator-=(const complex &lhs, const complex &rhs);

    complex operator*(const complex &lhs, const complex &rhs);

    void operator*=(const complex &lhs, const complex &rhs);

    complex operator+(const complex &lhs, const complex &rhs);

    void operator +=(const complex &lhs, const complex &rhs);

    boolean operator==(const complex &lhs, const complex &rhs);

    boolean operator!=(const complex &lhs, const complex &rhs);





   
    





        
};

