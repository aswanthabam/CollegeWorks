#include<iostream>
using namespace std;

class Student
{
	public:

	string name;
	int rollNo;
	string dept;
	void getDetails();
	void displayDetails();
};

void Student::getDetails()
{
	cout<<"Enter Sutdent name: ";
	cin>>name;
	cout<<"Enter student rollNo: ";
	cin>>rollNo;
	cout<<"Enter Department: ";
	cin>>dept;
}
void Student::displayDetails()
{
	cout<<"Name: "<<name<<endl<<"RollNo: "
	<<rollNo<<endl<<"Department: "<<dept
	<<endl<<endl;
}

int main()
{
	int n;
	Student d[10];
	cout<<"Enter limit: ";
	cin>>n;
	for(int i = 0;i < n;i++)d[i].getDetails();
	for(int i = 0;i < n;i++)d[i].displayDetails();
	return 0;
}
