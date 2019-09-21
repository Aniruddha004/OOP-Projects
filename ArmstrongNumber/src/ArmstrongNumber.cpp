//============================================================================
// Name        : ArmstrongNumber.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,j;
	int s,z,k;
	cout<<"Enter the number :";
	cin>>n;
	s=0;
	k=n;
	z=0;
	while(k>0)
	{
		j=k%10;
		k=k/10;
		z++;
	}
	cout<<"no. of digits in the number :" << z<<endl;
	k=n;
	while (k>0)
	{
		j=k%10;
		s+=pow(j,z);
		k=k/10;

	}
	cout<<s<<endl;
	if (s==n)
	{
		cout<<"Armstrong number";
	}
	else cout<<"Not an Armstrong no.";
	return 0;
}
