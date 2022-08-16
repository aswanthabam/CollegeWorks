#include<iostream>
using namespace std;

class Num
{
	public:
	int a,b;
	void getData();
	void big();
	void small();
	void sum();
	void diff();
};
void Num::getData()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}
void Num::big()
{
	cout<<"Biggest number is "<<((a > b) ? a:b)<<endl;
}
void Num::small()
{
	cout<<"Smallest number is "<<((a<b) ? a:b)<<endl;
}
void Num::sum()
{
	cout<<"Sum is "<<a+b<<endl;
}
void Num::diff()
{
	cout<<"Difference is "<<a-b<<endl;
}

int main()
{
	int n;
	Num nu[10];
	cout<<"Enter limit: ";
	cin>>n;
	for(int i = 0;i <n;i++)
	{
		nu[i].getData();
		nu[i].big();
		nu[i].small();
		nu[i].sum();
		nu[i].diff();
	}
	return 0;
}
