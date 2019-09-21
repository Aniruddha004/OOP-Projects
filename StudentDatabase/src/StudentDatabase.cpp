//============================================================================
// Name        : StudentDatabase.cpp
// Author      : 21405
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class student{
	string name,dob,class1,div,blood_group,contact_address;
	int roll_no,driving_license;
	float tele;
	static int count;
public:
	student(){
		count++;
		name="";
		dob="";
		class1="";
		div="";
		blood_group="";
		contact_address="";
		roll_no=0;
		tele=0;
		driving_license=0;
	}
	inline void getdata()
{

		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter roll no."<<endl;
		cin>>roll_no;
		cout<<"Enter date of birth:"<<endl;
		cin>>dob;
		cout<<"Enter class:"<<endl;
		cin>>class1;
		cout<<"Enter division:"<<endl;
		cin>>div;
		cout<<"Enter blood group:"<<endl;
		cin>>blood_group;
		cout<<"Enter contact address:"<<endl;
		cin>>contact_address;
		cout<<"Enter telephone number:"<<endl;
		cin>>tele;
		cout<<"Enter driving license number"<<endl;
		cin>>driving_license;

}
	student(string name, int roll_no,string div,string blood_group,string contact_address){
		count++;
		this->name=name;
		this->roll_no=roll_no;
		this->div=div;
		this->blood_group=blood_group;
		this->contact_address=contact_address;

	}
	student(student &s){
		count++;
		name=s.name;
		roll_no=s.roll_no;
		dob=s.dob;
		class1=s.class1;
		div=s.div;
		blood_group=s.blood_group;
		contact_address=s.contact_address;
		tele=s.tele;
		driving_license=s.driving_license;
	}
	void putdata(){
		cout<<"name:"<<name<<endl;
		cout<<"Roll no."<<roll_no<<endl;
		cout<<"Date of birth:"<<dob<<endl;
		cout<<"class:"<<class1<<endl;
		cout<<"Division:"<<div<<endl;
		cout<<"Contact address:"<<contact_address<<endl;
		cout<<"Blood group:"<<blood_group<<endl;
		cout<<"Driving license number:"<<driving_license<<endl;
		cout<<"Telephone number:"<<tele<<endl;
		}
	~ student(){
		count--;

	}

	friend class Stu;

	static int getcount()
	{
		count--;
		cout<< count;
	}
};
int student::count=1;
class Stu{
public:
	void getdata(student &s){
		cout<<"Enter date of birth:"<<endl;
		cin>>s.dob;
		cout<<"Enter class:"<<endl;
		cin>>s.class1;
		cout<<"Enter telephone number:"<<endl;
		cin>>s.tele;
		cout<<"Enter driving license number"<<endl;
		cin>>s.driving_license;

	}
};
int main() {
	string name,div,blood_group,contact_address;
	int roll_no;
	student *st;

    st=new student;
    st->getdata();

        cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter roll no."<<endl;
		cin>>roll_no;
		cout<<"Enter division:"<<endl;
		cin>>div;
		cout<<"Enter blood group:"<<endl;
		cin>>blood_group;
		cout<<"Enter contact address:"<<endl;
		cin>>contact_address;



		student s1(name,roll_no,div,blood_group,contact_address);
		Stu z;
		z.getdata(s1);
        student s3(*st);
        st->putdata();
        st->getcount();
        cout<<endl<<endl;
        s1.putdata();
        st->getcount();
        cout<<endl<<endl;
        s3.putdata();
        st->getcount();
        delete st;

	return 0;
}
