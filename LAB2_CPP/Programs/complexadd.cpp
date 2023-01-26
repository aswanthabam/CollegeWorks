// ADDITION AND SUBTRACTION OF COMPLEX NUMBERS
#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void read()
    {
        cout<<"complex number: ";
        cin>>a>>b;
    }
    void display()
    {
        if(b >= 0)cout<<a<<" + "<<b<<"i"<<endl;
        else cout<<a<<" - "<<-b<<"i"<<endl;
    }
    complex operator+(complex Y)
    {
        complex Z;
        Z.a = a+Y.a;
        Z.b = b+Y.b;
        return Z;
    }
    complex operator-(complex Y)
    {
        complex Z;
        Z.a = a-Y.a;
        Z.b = b-Y.b;
        return Z;
    }
};
int main()
{
    complex X,Y,Z;
    cout<<"Enter the real and imaginary part of the first ";
    X.read();
    cout<<"\nEnter the real and imaginary part of the second ";
    Y.read();
    cout<<"First complex number, X = ";
    X.display();
    cout<<"Second complex number, Y = ";
    Y.display();
    Z=X+Y;
    cout<<endl<<"After addition: X + Y = ";
    Z.display();
    Z=X-Y;
    cout<<"After subtraction: X - Y = ";
    Z.display();
    return 0;
}
