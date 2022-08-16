#include<iostream>
using namespace std;

int main()
{
	int d,m,y;
	cout<<"Enter day, month and year: ";
	cin>>d>>m>>y;
	if(d > 27)
	{
		if(m == 2)
		{
			// Month is February
			if((y % 4 == 0 && y%100 == 0 && y%400==0) || (y%100 != 0 && y % 4 == 0))
				d++;
			else{
				d = 1;
				m++;
			}
		}
		else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
		{
			// Month containing 31 days
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
			// Month is December
			if(d == 31)
			{
				d = 1;
				m = 1;
				y++;
			}else d++;
		}
		else{
			// Month containing 30 days
			if(d == 30)
			{
				d = 1;
				m++;
			}
		}
	}
	// day is less than 28 nothing more want to be done.
	else d++;
	
	cout<<"Next day is "<<d<<"/"<<m<<"/"<<y<<endl;
}