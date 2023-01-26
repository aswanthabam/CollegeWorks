/*
 Author : Aswanth VC
*/
#include<iostream>
using namespace std;

class Student
{
	int rollNo;
	string name,dob,college;
public:
	void getDetails()
	{
		cout<<"Enter student details\nName: ";
		cin>>name;
		cout<<"Roll No: ";
		cin>>rollNo;
		cout<<"College name: ";
		cin>>college;
		cout<<"Date of birth(dd/mm/yyyy): ";
		cin>>dob;
	}
	void displayDetails()
	{
		cout<<endl<<"Student Details\n\tName : "<<name<<endl
			<<"\tRoll No : "<<rollNo<<endl<<"\tCollege : "<<college
			<<"\n\tDate of birth : "<<dob<<endl;
	}
};

class Test
{
	string sub[5] = {"English","Hindi","Maths","C++","Digital"};
	float per,marks[5];
	
public:
	void getDetails ()
	{
		cout<<"Enter marks of:\n";
		for(int i = 0;i < 5;i++)
		{
			cout<<"\t"<<sub[i]<<": ";
			cin>>marks[i];
		}
	}
	void displayDetails()
	{
		cout<<"Marks: \n";
		for(int i = 0;i < 5;i++)
		{
			cout<<"\t"<<sub[i]<<": "<<marks[i]<<endl;
			per += marks[i];
		}
		per = (per/200)*100;
		cout<<"Percentage = "<<per<<"%"<<endl;
	}
};

class Result : public Test, public Student
{
public:
	void getDetails ()
	{
		Student::getDetails();
		Test::getDetails();
	}
	void publishResult()
	{
		cout<<"--- STUDENT DETAILS -------------\n";
		Student::displayDetails();
		cout<<"--- MARKS -----------------------\n";
		Test::displayDetails();
		cout<<"---------------------------------\n\n";
	}
};

int main()
{
	Result res[20];
	int n;
	cout<<"Enter how many students: ";
	cin>>n;
	for(int i = 0;i < n;i++) res[i].getDetails();
	for(int i = 0;i < n;i++) res[i].publishResult();
	return 0;
}