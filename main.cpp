#include"number.h"
int main()
{
	
	Number *i;
	RealNumber a(3.14),b(6.28);
	RealNumber c=a+b;
	RealNumber d=a*b;
	i=&c;(*i).print();
	i=&d;(*p).print();
	cout<<endl;
	
	IntegerNumber a(2332),b(1);
	IntegerNumber c=a+b;
	IntegerNumber d=a*b;
	i=&c;(*i).print();
	i=&d;(*i).print();
	cout<<endl;
	
	ComplexNumber a(complex<double>(5,2)),b(-5);
	ComplexNumber c=a+b;
	ComplexNumber d=a*b;
	i=&c2;(*i).print();
	i=&d2;(*i).print();
	cout<<endl;
	
	return 0;
}
