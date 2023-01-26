// FULL OF CORRECTIOns
#include<iostream>
using namespace std;
class Date
{
public:
  int d,m,y,flag = 0;
  void getDate()
  {
    cout<<"Enter date (DD MM YY): ";
    cin>>d>>m>>y;
  }
  void addDay()
  {
    if(d > 31 || m > 12)
    {
      flag = 1;
    }
    else{
      if(d > 27)
      {
        if(m == 2)
        {
          // Fedruary
          if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
          {
            // LEAP YEAR
            if(d > 29) flag = 1;
            else {
              if(d == 29){
                d = 1;
                m++;
              }else d++;
            }
          }else{
            if(d > 28)
            {
              flag = 1;
            }
            else{
              if(d == 28)
              {
                d = 1;
                m++;
              }else d++;
            }
          }
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
        {
          // MONTH Containing 31 days
          if(d == 31)
          {
            d = 1;
            m++;
          }else d++;
        }
        else if(m == 12)
        {
          // december
          if(d == 31)
          {
            d = 1;
            m = 1;
            y ++;
          }else d++;
        }
        else{
          // MONTH CONTAINING 30days
          if(d > 30) flag = 1;
          else {
            if(d == 30)
            {
              d = 1;
              m++;
            }else d++;
          }
        }
      }else d++;
    }
  }
  void display()
  {
    cout<<endl<<"Date is : "<<d<<"/"<<m<<"/"<<y<<endl;
  }
};
int main()
{
  Date d;
  d.getDate();
  d.addDay();
  d.display();
  return 0;
}