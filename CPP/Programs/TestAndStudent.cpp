// STUDENT DETAILS AND TEST RESULTS
#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name,regno,dob,clg;
    int i;
    void getStudentDetails()
    {
        cout<<".......................\n";
        cin.ignore();
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter Register No: ";
        getline(cin, regno);
        cout<<"Enter date of birth: ";
        getline(cin, dob);
        cout<<"Enter name of college: ";
        getline(cin, clg);
        cout<<".......................\n";
        cout<<endl;
    }
    void displayStudentDetails()
    {
        cout<<"\nName: "<< name<<endl;
        cout<<"Register No: "<<regno<<endl;
        cout<<"Date of birth: "<<dob<<endl;
        cout<<"College: "<<clg<<endl;

    }
    
};
class Test
{
	string subs[5] = {"English","Hindi","Maths","C++","Java"};
	string marks[5];
public:
    void getTestDetails()
    {
        cout<<"Enter marks of each subject: "<<endl;
        for(int i=0;i<5;i++)
        {
        	cout<<i+1<<". "<<subs[i]<<": ";
        	getline(cin,marks[i]);
        }
    }
    void displayTestDetails()
    {
        cout<<"\nSubjects and Marks: "<<endl;
        cout<<".......................\n";
        for(int j=0;j<5;j++)
        {
            cout<<j+1<<". "<<subs[j]<<" : "<<marks[j]<<endl;
        }
        
    }
};
class Result: public Student,public Test
{
public:
    void getDetails()
    {
        getStudentDetails();
        getTestDetails();
    }
    void displayDetails()
    {
    	cout<<".......................\n";
        displayStudentDetails(); 
        displayTestDetails();
        cout<<".......................\n";
    }
};

int main()
{
    Result r[30];
    int n;
    cout<<"Enter no.of students: ";
    cin>>n;
    for(int i = 0; i < n;i++)
    {
    	cout<<"Enter details of student "<<i+1<<":-\n";
    	r[i].getDetails();
    }
    cout<<"**************************************\n";
    cout<<"Results :- \n";
    for(int i = 0; i < n;i++)
    {
    	cout<<"\nStudent "<<i+1<<":-\n";
    	r[i].displayDetails();
    }
    cout<<"**************************************\n";
    return 0;
}
