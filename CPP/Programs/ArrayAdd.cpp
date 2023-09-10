//ADDING ELEMENTS OF TWO ARRAYS
#include <iostream>
using namespace std;
class Array
{   public:
    int a[10],n;
    void read()
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<endl;
    }
    void display()
    {
    cout<<"Sum of both arrays is : ";
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
    cout<<"\nEnter no.of elements of arrays (This number would be same for both arrays): ";
    cin>>x.n;
    y.n=x.n;
    cout<<endl;
    cout<<"Enter first array: ";
    x.read();
    cout<<"Enter second array: ";
    y.read();
    z=x+y;
    z.display();
    return 0;
}
