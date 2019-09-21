//============================================================================
// Name        : Employee.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Personal
{
	string name;
  public:
	  Personal()
      {
		cout<<"Personal Constructor"<<endl;
      }
	  void getdata()
	  {
		  cout<<"Enter Name: "<<endl;
		  cin>>name;
	  }
	  void putdata()
	  {
		  cout<<"Name :"<<name<<endl;
	  }
	  ~Personal()
	  {
		  cout<<"Personal Destructor"<<endl;
	  }
};

class Professional
{
	string profession;
  public:
	Professional()
      {
		cout<<"Professional Constructor"<<endl;
      }
	  void getdata()
	  {
		  cout<<"Enter Profession: "<<endl;
		  cin>>profession;
	  }
	  void putdata()
	  {
		  cout<<"Profession :"<<profession<<endl;
	  }
	  ~Professional()
	  {
		  cout<<"Professional Destructor"<<endl;
	  }
};

class Academic
{
	string record;
  public:
	Academic()
      {
		cout<<"Academic Constructor"<<endl;
      }
	  void getdata()
	  {
		  cout<<"Enter record: "<<endl;
		  cin>>record;
	  }
	  void putdata()
	  {
		  cout<<"Profession :"<<record<<endl;
	  }
	  ~Academic()
	  {
		  cout<<"Academic Destructor"<<endl;
	  }
};

class Employee : public Personal, public Professional, public Academic
{
	string id;
  public:
	Employee()
      {
		cout<<"Employee Constructor"<<endl;
      }
	  void getdata()
	  {
		  Personal :: getdata();
		  Professional :: getdata();
		  Academic :: getdata();
		  cout<<"Enter id: "<<endl;
		  cin>>id;
	  }
	  void putdata()
	  {
		  Personal :: putdata();
		  Professional :: putdata();
		  Academic :: putdata();
		  cout<<"ID :"<<id<<endl;
	  }
	  ~Employee()
	  {
		  cout<<"Employee Destructor"<<endl;
	  }

};

int main() {
	Employee E;
	E.getdata();
	E.putdata();
	return 0;
}
