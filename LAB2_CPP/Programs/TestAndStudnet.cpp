/*
 Author : Aswanth V c

 Define a class student with name,reg.no,date of birth
 and name of college as member data and function to get
 and display these details. Design another class test which
 derives class student with subjects of study and grade for
 each subject as member data and corresponding input and
 output functions and print the result of  student with
 relevant information.
*/
#include<iostream>
#include<string>

using namespace std;

class Test
{
	string subjects[10];
	int marks[10],n;
	
	public:
		void getDetails();
		void displayMarks();
};

class Student : public Test
{
	string name,dob,college;
	int regNo;
	public:
		void getStudentDetail();
		void displayStudent();
	
};

int main()
{
	Student st;
	st.getStudentDetail();
	st.getDetails();
	st.displayStudent();
	st.displayMarks();
	return 0;
}
void Student::displayStudent()
{
	cout<<endl<<"Name: "<<name<<endl;
	cout<<"Reg No: "<<regNo<<endl;
	cout<<"College name: "<<college<<endl;
}
void Test::getDetails()
{
	cout<<"Enter how many subjects: ";
	cin>>n;
	cout<<"Enter subjects: \n";
	for(int i = 0;i < n;i++) cin>>subjects[i];
	cout<<"Enter marks: \n";
	for(int i = 0;i < n;i++) 
	{
		cout<<"\t"<<subjects[i]<<": ";
		cin>>marks[i];
	}
	
}
void Test::displayMarks()
{
	cout<<"\nStudent marks: \n";
	for(int i = 0;i < n;i++) 
	{
		cout<<"\t"<<subjects[i]<<": "<<marks[i]<<endl;
	}
	cout<<endl;
}
void Student::getStudentDetail()
{
	cout<<"Enter student name: ";
	cin>>name;
	cout<<"Enter student date of birth: ";
	cin>>dob;
	cout<<"Enter college name: ";
	cin>>college;
	cout<<"Enter register no: ";
	cin>>regNo;
}