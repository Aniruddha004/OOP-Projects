//============================================================================
// Name        : Quadratic.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
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
		cout<<"Enter the coefficients in Expression :";
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
	friend ostream & operator << (ostream &out, quadratic &c);
	friend istream & operator >> (istream &in, quadratic &c);
};

ostream & operator << (ostream &out, quadratic &q)
{
	out<<q.a<<" "<<q.b<<" "<<q.c;
	return out;
}

istream & operator >> (istream &in, quadratic &q)
{
	cout<<"Enter coefficients of quadratic equations:";
	in>>q.a>>q.b>>q.c;
	return in;
}

int main() {
	int x;

	quadratic s1,s2,s3;
	cin>>s1;
	cin>>s2;
	s3=s1+s2;
	int k;
	cout<<"Enter your choice:"<<endl;
	cout<<"1.Addition"<<endl<<"2.Value of Expression 1:"<<endl<<"3.Value of Expression 1:"<<endl<<"4.Solution of Expression 1:"<<endl<<"5.Solution of Expression 2:"<<endl<<"6.Exit"<<endl;
	cin>>k;

	switch(k){
	case 1:
	cout<<"Addition of two polynomials is:"<<endl;
	cout<<s3;
	break;
	case 2:
	cout<<"Enter value of x:";
	cin>>x;
	cout<<"Value of Expression 1 is:"<<endl;
	s1.eval(x);
	break;
	case 3:
	cout<<"Enter value of x:";
		cin>>x;
	cout<<"Value of Expression 2 is:"<<endl;
	s2.eval(x);
	break;
	case 4:
	cout<<"Solution of Expression 1 is:"<<endl;
	s1.solution();
	break;
	case 5:
	cout<<"Solution of Expression 2 is:"<<endl;
	s2.solution();
	break;
	}
	return 0;
}
