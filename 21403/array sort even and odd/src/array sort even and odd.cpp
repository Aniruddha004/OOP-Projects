//============================================================================
// Name        : array.cpp
// Author      : 21403
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter elements in array"<<endl;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,k;
	int temp,t2=0;
	for(i=0;i<n-1;i++)
	{t2=0;
		for(j=0;j<n-1;j++)
		{
			if((a[j]%2!=0)&&(a[j+1]%2==0))
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				t2+=1;
			}
		}
		if(t2==0)
			break;
	}
	cout<<"Even numbers:"<<endl;
	for(j=0;j<n;j++)
	{

		if(a[j]%2==0)
		{
			cout<<a[j]<<" ";
		}
		else
			break;

	}
cout<<endl;
cout<<"Odd numbers:"<<endl;
for(k=j;k<n;k++)
{
	cout<<a[k]<<" ";
}

	return 0;
}
