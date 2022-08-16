/*
 Author : Aswanth V C
*/
#include<iostream>
using namespace std;

class Sort
{
	int num[25],n;
	public:
	void get();
	void sort();
};
int main()
{
	Sort s;
	s.get();
	s.sort();
}
void Sort::get()
{
	cout<<"Enter limit : ";
	cin>>n;
	cout<<"Enter numbers: ";
	for(int i = 0;i < n;i++) cin>>num[i];
}
void Sort::sort()
{
	int lg,k,u = n;
	cout<<"Sorted list is: \n";
	for(;n >0;n--)
	{
		for(int i = 0;i < n;i++)
		{
			if(num[i] > lg || i == 0)
			{ 
				lg = num[i];
				k = i;
			}
		}
		num[k] = num[n-1];
		num[n-1] = lg;
	}
	for(int i = 0;i < u;i++) cout<<num[i]<<", ";
	cout<<endl;
}
