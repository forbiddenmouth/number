#ifndef NUMBER_Header
#define NUMBER_Header
#include<iostream>
#include<complex>

using namespace std;
class Number
{
	public:
	virtual void print()=0;
};

class RealNumber:public Number
{
	public:
		double k;
		RealNumber(double x=0);
		void print();
	    RealNumber operator+(const RealNumber&a);
		RealNumber operator*(const RealNumber&a);
		
};

class IntegerNumber:public RealNumber
{
	public:
		IntegerNumber(int x=0);
		IntegerNumber(const RealNumber&a);
};

class ComplexNumber:public Number
{
	public:
		ComplexNumber(complex<double> x=0);
		void print();
		ComplexNumber operator+(const ComplexNumber&a);
		ComplexNumber operator*(const ComplexNumber&a);
		complex<double> k;
};
#endif
