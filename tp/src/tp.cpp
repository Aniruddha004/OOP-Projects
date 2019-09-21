#include <iostream>
#include<string.h>
using namespace std;

class Student
{
	string name, dob, bg,ca,tn;
	int rollno;
	static int count;
public:
    Student()
    {
	   count++;
	   cout<<"Enter name :"<<endl;
	   	cin>>name;
	   	cout<<"Enter Roll no. :"<<endl;
	   	cin>>rollno;
	   	cout<<"Enter Blood Group :"<<endl;
	   	cin>>bg;
	   	cout<<"Enter Contact Address :"<<endl;
	   	cin>>ca;
	   	cout<<"Enter Telephone no. :"<<endl;
	   	cin>>tn;


    }

	Student (string name, int rollno)
	{
		count++;
		this->name=name;
		this->rollno=rollno;
		this->dob=dob;
		this->bg=bg;
		this->ca=ca;
		this->tn=tn;
	}
	Student (Student &s)
	{

		name=s.name;
		rollno=s.rollno;
		dob=s.dob;
		bg=s.bg;
		ca=s.ca;
		tn=s.tn;
	}
	~ Student ()
	{
		count--;
		cout<<"Count :"<<count<<endl;


	}
	void putdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Date of Birth:"<<dob<<endl;
		cout<<"Roll no."<<rollno<<endl;
		cout<<"Blood group :"<<bg<<endl;
		cout<<"Contact address :"<<ca<<endl;
		cout<<"Telephone Number :"<<tn<<endl;
	}
	friend class Student_per;

};

class Student_per
	{
	public:
	void getdata(Student s)
	{
		cout<<"Enter date of birth :"<<endl;
		cin>>s.dob;
	}
};

int Student :: count=1;

int main()
{
	string name1, dob1,bg1,ca1,tn1;
	int rollno1;
	Student s;
	cout<<"Enter name :"<<endl;
	cin>>name1;
	cout<<"Enter Roll no. :"<<endl;
	cin>>rollno1;
	cout<<"Enter Blood Group :"<<endl;
	cin>>bg1;
	cout<<"Enter Contact Address :"<<endl;
	cin>>ca1;
	cout<<"Enter Telephone no. :"<<endl;
	cin>>tn1;

	 Student s1(name1, rollno1);
	 Student_per sp;
	 sp.getdata(s);
	 Student s2(s);
	 s.putdata();
	 s1.putdata();
	 s2.putdata();
	return 0;
}
