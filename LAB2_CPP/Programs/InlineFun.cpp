/*
 Author : Aswanth V C
*/
#include<iostream>
using namespace std;
class operation
{
	int a,b;
	public:
	void get();
	void big();
	void small();
	void add();
	void sub();
};

int main()
{
	operation s;
	s.get();
	s.big();
	s.small();
	s.add();
	s.sub();
}
inline void operation::get()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}
inline void operation::big()
{
	cout<<"Biggest number is "<<((a >= b) ? a : b)<<endl;
}
inline void operation::small()
{
	cout<<"Smallest number is "<<((a <= b) ? a : b)<<endl;
}
inline void operation::add()
{
	cout<<"Sum is "<<a+b<<endl;
}
inline void operation::sub()
{
	cout<<"Difference is "<<a-b<<endl;
}