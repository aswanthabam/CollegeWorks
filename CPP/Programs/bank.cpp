//BANK ACCOUNT
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Bank
{
	string name;
    long accno;
    string acctype;
    float balance;
public:
    void get()
    {
    	cout<<"Enter account number: ";
    	cin>>accno;
    	if(!fromAccountNo())
    	{
    		cin.ignore();
    		cout<<"\nEnter name of the depositor : ";
    		getline(cin,name);
    		cout<<"\nEnter the account type (Savings or Current) : ";
    		getline(cin,acctype);
    		cout<<"\nEnter the balance amount : ";
    		cin>>balance;
    	}
    }
    bool fromAccountNo()
    {
    	fstream ob;
    	ob.open("bank"+to_string(accno)+".txt",ios::in);
    	if(!ob.is_open()) return false;
    	Bank b;
    	ob.read((char*)&b,sizeof(b));
    	name = b.name;
    	acctype = b.acctype;
    	balance = b.balance;
    	ob.close();
    	return true;
    }
    void deposit()
    {
    	int dep;
        cout<<"\nEnter amount to be deposited : ";
        cin>>dep;
        balance=balance+dep;
        cout<<"* Deposited amound sucessfully!";
    }
    void withdraw()
    {
        int t=1;
        int wd;
        cout<<"\nRemaining balance :"<<balance<<endl;
        cout<<"\nEnter amount to be withdrawn : ";
        cin>>wd;        
        if(wd>balance)
        {
            cout<<"\n* Not Enough Balance!!!\n\n";
        }
        else
        {
            balance=balance-wd;
            cout<<"* Amound withdrawed\n";
            cout<<"\n* Balance after withdrawal : "<<balance<<endl;
        }
    }
    void display()
    {
        cout<<left<<"*"<<setfill('*')<<setw(40)<<"*"<<endl;
        cout<<left<<setfill(' ')<<setw(20)<<" Name : "<<name<<endl;
        cout<<left<<setfill(' ')<<setw(20)<<" Account Type : "<<acctype<<endl;
        cout<<left<<setfill(' ')<<setw(20)<<" Account No : "<<accno<<endl;
        cout<<left<<setfill(' ')<<setw(20)<<" Balance Amount : "<<balance<<endl;
        cout<<left<<"*"<<setfill('*')<<setw(40)<<"*"<<endl;
    }
    ~Bank()
    {
    	fstream ob;
    	ob.open("bank"+to_string(accno)+".txt",ios::out);
    	if(ob.is_open()) ob.write((char*)this,sizeof(*this));
    	ob.close();
    }
};

int main()
{
    int t=1,op;
    Bank b;
    b.get();
    while(t==1)
    {
    	cout<<"\nChoose an option:-\n";
    	cout<<"1. For Withdraw\n2. For Deposite\n3. For Balance\n4. Close\n\n Choose: ";
    	cin >> op;
    	switch(op)
    	{
    		case 1:
    		    b.withdraw();
    		    break;
    		case 2:
    	        b.deposit();
    	        break;
    	    case 3:
    	        b.display();
    	        break;
    	    case 4:return 0;
    	    default:
    	        cout<<"Invalid option!\n";
    	        continue;
    	}
        cout<<"\n\n? Do you wish to make further transactions?\nEnter 1 if Yes or Enter 0 if No: ";
        cin>>t;
    }
    b.display();
    return 0;
}
