//============================================================================
// Name        : SelectionSort.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
void sort (T ar[], int n){
	int i,j;
	T temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i] = ar[j];
				ar[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}

int main() {
	int n;
	cout<<"Enter no. of elements";
	cin>>n;
	int ar[n];
	float b[n];
	cout<<"Enter integer elements";
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,n);
	cout<<"Enter float elements";
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(b,n);



	return 0;
}
