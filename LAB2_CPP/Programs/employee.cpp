// EMPLOYEE DETAILS
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
class Employee
{
	public:
	string id[10],name[10], salary[10];
	void getdetails(int n)
	{
		cout<<"Enter Employee details:-\n";
	    for(int i=0;i<n;i++)
        {
            cout<<"\nEmployee "<<i+1<<endl;
            cout<<"........................\n";
	        cin.ignore();
	        cout<<"Enter Employee Id :  ";
            getline (cin, id[i]);
            cout<<"Enter Name :  ";
            getline (cin, name[i]);
            cout<<"Enter Salary:  ";
            getline (cin, salary[i]);
        }
    }
    void printDetails(int n)
    {
    	for(int i=0;i<n;i++)
        {
            cout<<"\nDetails of Employee "<<i+1<<endl;
            cout<<".........................\n";
            cout<<"ID : "<<id[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Salary : "<<salary[i]<<endl;
        }
    }
};
void writefile(Employee *e)
{
	fstream ob1;
	ob1.open("EmpDataFile.txt",ios::out);
	if(!ob1)
	{
		cout<<"\n* File not created!\n";
	}
	else
	{
		cout<<"\n* File created\n\n";
        ob1.write((char *)e,sizeof(*e));
        ob1.close();
    }
}
Employee readfile()
{   
	Employee temp;
    ifstream ob1;
    ob1.open("EmpDataFile.txt",ios::in);
    if(!ob1)
    {
	    cout<<"\n* Can't open file!\n";
 	}
 	else
 	{
 		cout<<"\n* File Opened\n\n";
        ob1.read((char*)&temp,sizeof(temp));
        ob1.close();
    }
    return temp;
}
int main()
{
	Employee emp,out;
	int n;
	cout<<"Enter the no. of employees : ";
	cin>>n;
    emp.getdetails(n);
    writefile(&emp);  
    out = readfile();
    cout<<"\nFile contents are:- "<<endl;
    cout<<"***********************************\n";
    out.printDetails(n);
    cout<<"***********************************\n";
    return 0;
}
