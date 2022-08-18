//SWAP AND INCREMENT
#include <iostream>
using namespace std;
class B;
class A
{
	int a;
public:
  	A(int x)
  	{
	   	a=x;
	}
	friend void swap(A ob1,B ob2 );
};
class B
{
	int b;
public:
 	B(int y)
	{
	   	b=y;
	}
	friend void swap(A ob1,B ob2);
};
void swap(A ob1,B ob2)
{
    cout<<"\nBefore Swapping, A = "<<ob1.a<<" and B = "<<ob2.b<<endl;
 	int t;
 	t=ob1.a;
 	ob1.a=ob2.b;
 	ob2.b=t;
    cout<<"\nAfter Swapping, A = "<<ob1.a<<" and B = "<<ob2.b<<endl;
 	ob1.a++;
    ob2.b++;
    cout<<"\nAfter Swapping and Incrementing, A = "<<ob1.a<<" and B = "<<ob2.b<<endl;
}
int main()
{   
    cout<<"\n.............................................";
	A ob1(7);
	B ob2(14);
    swap(ob1,ob2);
    cout<<".............................................\n\n";
    return 0;
}
