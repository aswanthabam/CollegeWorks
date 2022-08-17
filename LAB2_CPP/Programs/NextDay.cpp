//PROGRAM TO ADD ONE DAY TO A GIVEN DATE
#include<iostream>
using namespace std;
class Date
{ 
  int d,m,y,flag = 0;
public:
  void get()
  {
    cout<<"Enter day, month and year: ";
    cin>>d>>m>>y;
    cout<<"Entered date : "<<d<<"/"<<m<<"/"<<y<<endl;
  }
  void addDay()
  {
    if(d > 31 || m > 12) flag = 1;
    else
    if(d > 27)
    {
      if(m == 2)
      {
        // MONTH IS FEBRUARY
        if((y % 4 == 0 && y%100 == 0 && y%400==0) || (y%100 != 0 && y % 4 == 0))
          if(d > 29)
          {
            flag = 1;
          }
          else d++;
        else{
          if(d > 28)
          {
            flag = 1;
          }
          else
          {
            d = 1;
            m++;
          }
        }
      }
      else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
      {
        // MONTH CONTAINING 31 DAYS
        if(d == 31)
        {
          d = 1;
          m ++;
        }else
        {
          d++;
        }
      }
      else if(m == 12)
      {
        // MONTH IS DECEMBER
        if(d == 31)
        {
          d = 1;
          m = 1;
          y++;
        }else d++;
      }
      else{
        // MONTH CONTAINING 30 DAYS
        if(d>30) flag = 1;
        if(d == 30)
        {
          d = 1;
          m++;
        }
      }
    }
    // DAY IS LESS THAN 28 NOTHING MORE WANT TO BE DONE.
    else d++;
  }
  void display()
  {
    if(flag == 0) cout<<"Next day is : "<<d<<"/"<<m<<"/"<<y<<endl;
    else cout<<"Invalid Date!";
  }
};
int main()
{
  Date date;
  date.get();
  date.addDay();
  date.display();
  return 0;
}