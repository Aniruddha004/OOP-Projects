//============================================================================
// Name        : star.cpp
// Author      : 21403
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i,k;
	cout<<"Enter no of lines"<<endl;
	cin>>i;
	for(int j=0;j<i;j++)
	{
		for(k=0;k<j;k++)

		{
			cout<<" ";
		}
		for(k=0;k<(2*i-2*j-1);k++)
		{
			if(k%2==0)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;

	}
	return 0;
}
