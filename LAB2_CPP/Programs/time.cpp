// PROGRAM TO ADD TIME TO ANOTHER
#include <iostream>
using namespace std;
class Time
{
public:
  int hr,min,sec;
  Time(int h=0, int m=0,int s=0)
  {
    hr=h;
    min=m;
    sec=s;
  }
  Time add(Time t)
  {
    // ADDS TIME
    Time temp;
    temp.sec = sec + t.sec;
    temp.min = min + t.min;
    temp.hr = hr + t.hr;
    
    while(temp.sec >= 60)
    {
      temp.min++;
      temp.sec -= 60;
    }
    while(temp.min >= 60)
    {
      temp.hr++;
      temp.min -= 60;
    }
    return temp;
  }
  void display()
  {
    cout<<hr<<" Hours "<<min<<" Minutes and "<<sec<<" Seconds ("<<hr<<":"<<min<<":"<<sec<<")"<<endl;
  }
};
int main()
{   
  int e,f,g, p,q,r;
  cout<<"\nEnter Initial time in hh mm ss format : ";
  cin>>e>>f>>g;
  cout<<"Enter time to be added in hh mm ss format : ";
  cin>>p>>q>>r;
  Time t1(e,f,g), t2(p,q,r),t3;
  t3 = t1.add(t2);
  cout<<endl<<"Initial time is : ";
  t1.display();
  cout<<endl;
  cout<<"Time to be added is : ";
  t2.display();
  cout<<endl;
  cout<<"Resultant time is : ";
  t3.display();
  cout<<endl;
  return 0;
}
