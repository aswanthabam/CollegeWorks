/*WAP to find biggest, smallest, sum and difference of two numbers 
using inline Functions. Use class concept*/
#include <iostream>
using namespace std;
class num
{
    public :
         int a,b;
        void getdata();
        void big();
        void small();
        void sum();
        void dif();
};
 inline void num::getdata ()
{
  cout<<"enter two numbers :";
  cin>>a>>b;
}
 inline void num::big()
{
  if (a>b)
      cout<<"Biggest number is "<<a<<endl;
else
    cout<<"Biggest number is "<<b<<endl;
}
 inline void num::small()
{
  if(a<b)
     cout<<"smallest number is "<<a<<endl;
else
   cout<<"smallest number is "<<b<<endl;
}
inline void num::sum()
{
 cout<<"sum is "<<a+b<<endl;
}
inline void num ::dif()
{
  cout<<"Difference is "<<a-b<<endl;
}
int main()
{
  num N;
  int a, b;
  N. getdata();
  N. big();
  N.small();
  N. sum();
  N. dif();
 return 0;
}
