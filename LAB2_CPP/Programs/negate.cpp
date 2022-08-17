//NEGATION OF ELEMENTS OF AN ARRAY
#include<iostream>
using namespace std;
class Negate
{
	int a[20],n;
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
	Negate obj;
	obj.read();
	cout<<"Before Negation ";
	obj.display();
	-obj;
	cout<<"After Negation ";
	obj.display();
	return 0;
}