/*
 Author : Aswanth V C
*/
#include<iostream>
using namespace std;
class sample
{
	int a[10],n;
public:
	void read()
	{
		cout<<"Enter limit: ";
		cin >> n;
		cout<<"Enter elements: ";
		for(int i = 0;i < n;i++) cin>>a[i];
	}
	void display()
	{
		cout<<"Array elements: ";
		for(int i = 0;i < n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	void operator-()
	{
		for(int i = 0;i < n;i++) a[i] *= -1;
	}
};

int main()
{
	sample obj;
	obj.read();
	-obj;
	obj.display();
	return 0;
}