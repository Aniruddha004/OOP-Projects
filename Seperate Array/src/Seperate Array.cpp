//============================================================================
// Name        : Seperate.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int s=0,t=0,n;
	int a[n],o[n],r[n];
	cout<<"Enter an array :";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int j=0;j<n;j++)
	{
		if (a[j]%=0)
		{
			o[s]=a[j];
			s++;
		}
		else
		{
			r[t]=a[j];
			t++;
		}
	}
	return 0;
}
