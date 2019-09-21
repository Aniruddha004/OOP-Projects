//============================================================================
// Name        : Calculator.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

#define PI 3.14159265

int main() {
	char x, z;
			double t;
	float a,b;
	char op, n;
	do{
	cout<<"Enter the first number, operator, second number:";
	cin>>a>>op>>b;

	switch (op)
	{
	case '+':
		cout<<a+b<<endl;
		break;
	case '-':
		cout<<a-b<<endl;
		break;
	case '*':
		cout<<a*b<<endl;
		break;
	case '/':
		cout<<a/b<<endl;
		break;
	default:
		cout<<"Error: Operator incorrect !"<<endl;


	}
	cout<<"Do you want to continue ? (y/n)";
			cin>>n;
	}while(n!='n');

    cout<<"Do you want to perform trigonometric calculations ?";
    cin>>x;
    if(x=='Y')
    {
    do{
	    cout<<"Enter initial of trigonometric function to be performed :";\
	    cin>>z;

	    	cout<<"Enter angle :";
	    	cin>>t;
	    	switch (z)
	    	{
	    	case 's' :
	    		cout<<sin(t*PI/180)<<endl;
	    		break;
	    	case 'c' :
	    		cout<<cos(t*PI/180)<<endl;
	    		break;
	    	case 't' :
	    		cout<<tan(t*PI/180)<<endl;
	    		break;
	    	}
	    	cout<<"Do you want to continue";
	    	cin>>x;

	}while (x !='N');
    }

    cout<<"Exit Calculator";
	return 0;
}
