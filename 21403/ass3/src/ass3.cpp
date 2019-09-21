//============================================================================
// Name        : ass3.cpp
// Author      : 21403
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;
class quadratic
{
	double a,b,c;
public:
	quadratic()
	{
		a=0;
		b=0;
		c=0;
	}
	void getdata()
	{
		cin>>a>>b>>c;
	}
	void putdata()
	{
		cout<<a<<"x*x+"<<b<<"x+"<<c<<"=0"<<endl;
	}
	quadratic(double x,double y,double z)

	{
	a=x;
	b=y;
	c=z;

	}
	quadratic operator +(quadratic m)
	{
		return quadratic(a+m.a,b+m.b,c+m.c);
	}
	void eval(int x)
	{
		cout<<a*x*x+b*x+c<<endl;
	}
	void solution()
	{
		int y,z;
		y=((-1*b)+pow((b*b-4*a*c),0.5))/(2*a);
		z=((-1*b)-pow((b*b-4*a*c),0.5))/(2*a);
		cout<<y<<" "<<z<<endl;

	}
};

int main() {
	int x;
	quadratic s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	cout<<"Addition of two polynomials is:"<<endl;
	s3.putdata();
	cout<<"Enter value of x:";
	cin>>x;
	cout<<"value of 1st polynomial is:"<<endl;
	s1.eval(x);
	cout<<"value of 2nd polynomial is:"<<endl;
	s2.eval(x);
	cout<<"Solution of 1st polynomial is:"<<endl;
	s1.solution();
	cout<<"Solution of 2nd polynomial is:"<<endl;
	s2.solution();

	return 0;
}
