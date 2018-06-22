#include"number.h"

RealNumber::RealNumber(double x)
{
    k=x;
}
void RealNumber::print()
{
    cout<<k<<endl;
}
RealNumber RealNumber::operator+(const RealNumber&a)
{
    return RealNumber(k+a.k);
}
RealNumber RealNumber::operator*(const RealNumber&a)
{
    return RealNumber(k*a.k);
}


IntegerNumber::IntegerNumber(int x)
{
    k=x;
}
IntegerNumber::IntegerNumber(const RealNumber&a)
{
    k=int(a.k);
}


ComplexNumber::ComplexNumber(complex<double> x)
{
    k=x;
}
void ComplexNumber::print()
{
    cout<<k<<endl;
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber&a)
{
    return ComplexNumber(k+a.k);
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber&a)
{
    return ComplexNumber(k*a.k);
}
