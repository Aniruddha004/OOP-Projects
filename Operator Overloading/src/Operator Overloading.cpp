//============================================================================
// Name        : complex.cpp
// Author      : 21403
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
class complex
{
	double r,i;
public:
complex()
{
	r=0;
	i=0;
}

complex operator +(complex m)
{
	return complex(r+m.r,i+m.i);

}
complex operator -(complex m)
{
	return complex(r-m.r,i-m.i);

}
complex operator *(complex m)
{
	return complex(r*m.r-i*m.i,r*m.i+i*m.r);

}
complex operator /(complex m)
{
	return complex(((r*m.r)+(i*m.i))/((m.r*m.r)+(m.i*m.i)),((i*m.r)-(r*m.i))/((m.r*m.r)+(m.i*m.i)));

}
complex(double k,double j)
{
	r=k;
	i=j;
}

friend ostream & operator << (ostream &out, complex &c);
friend istream & operator >> (istream &in, complex &c);
};

ostream & operator << (ostream &out, complex &c)
{
	out<<c.r<<"+i"<<c.i;
	return out;
}

istream & operator >> (istream &in, complex &c)
{
	cout<<"Enter real and imaginary part of complex number:";
	in>>c.r>>c.i;
	return in;
}

int main() {
complex s1,s2,s3;
cin>>s1;
cin>>s2;
int i;
for(int j=1;j;j++)
{
	cout<<endl;
	cout<<endl;
cout<<"Enter your choice:"<<endl;
cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Exit"<<endl;
cin>>i;
if(i==5)
	break;
switch(i){
case 1:
	s3=s1+s2;
	cout<<s3;
	break;
case 2:
	s3=s1-s2;
	cout<<s3;
	break;
case 3:
	s3=s1*s2;
	cout<<s3;
	break;
case 4:
	s3=s1/s2;
	cout<<s3;


}
}

return 0;
}
