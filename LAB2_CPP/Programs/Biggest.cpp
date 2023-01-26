//BIGGEST, SMALLEST, SUM AND DIFFERENCE OF TWO NUMBERS
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
inline void Num::getData()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}
inline void Num::big()
{
	cout<<"Biggest number is : "<<((a > b) ? a:b)<<endl;
}
inline void Num::small()
{
	cout<<"Smallest number is : "<<((a<b) ? a:b)<<endl;
}
inline void Num::sum()
{
	cout<<"Sum is : "<<a<<" + "<<b<<" = "<<a+b<<endl;
}
inline void Num::diff()
{
	cout<<"Difference is : "<<a<<" - "<<b<<" = "<<a-b<<endl;
}

int main()
{
	Num nu;
	nu.getData();
	nu.big();
	nu.small();
	nu.sum();
	nu.diff();
	return 0;
}
