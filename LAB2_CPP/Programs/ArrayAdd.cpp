#include <iostream>
using namespace std;
class Array
{   public:
    int a[10],n;
    void read()
    {
        cout<<"array's elements\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<endl;
    }
    void display()
    {
        cout<<"Sum of both arrays is\n";
          for(int i=0;i<n;i++)
          {
              cout<<a[i]<<" ";
          }
          cout<<endl<<endl;
        }
        Array operator+(Array y)
        {
            Array z;
            z.n=n;
            for(int i=0;i<n;i++)
          {
                z.a[i]=a[i]+y.a[i];
          }
          return z;
    }
};
int main()
{
    Array x,y,z;
    cout<<"\nEnter no.of elements of arrays\n(This number would be same for both arrays)\n";
    cin>>x.n;
    y.n=x.n;
    cout<<endl;
    cout<<"Enter first ";
    x.read();
    cout<<"Enter second ";
    y.read();
    z=x+y;
    z.display();
    return 0;
}
