//============================================================================
// Name        : StarPractical.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i,j,n,k;
	cout<<"Enter no. of lines to be printed:";
	cin>>k;
	for (i=0;i<k;i++)
	{
		for(n=0;n<i;n++)
		{
			cout<<" ";
		}
		for(j=0;j<(k-i);j++)
		{
			cout<<"* ";
		}
	}
	return 0;
}
