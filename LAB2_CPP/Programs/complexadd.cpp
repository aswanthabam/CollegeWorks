#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void read()
    {
        cout<<" complex number: ";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"both complex numbers is: "<<a<<" + i"<<b<<endl<<endl;
    }
    complex operator+(complex Y)
    {
        complex Z;
        Z.a=a+Y.a;
        Z.b=b+Y.b;
        cout<<"\nSum of ";
        return Z;
    }
    complex operator-(complex Y)
    {
        complex Z;
        Z.a=a-Y.a;
        Z.b=b-Y.b;
        cout<<"Difference of ";
        return Z;
    }
};
int main()
{
    complex X,Y,Z;
    cout<<"\nEnter the real and imaginary part of the first";
    X.read();
    cout<<"\nEnter the real and imaginary part of the second";
    Y.read();
    Z=X+Y;
    Z.display();
    Z=X-Y;
    Z.display();
    return 0;
}
