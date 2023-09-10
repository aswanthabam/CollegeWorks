//SORTING STRINGS
#include <iostream>
#include <string>
#define DAYS 7
using namespace std;
class Sort
{
	int size = DAYS;
	char *strings[DAYS] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
public:
    void sort()
    {
    	for (int i = 0; i < size - 1; ++i)
    	{
    		for (int j = i + 1; j < size; ++j)
    		{
    			if (strcmp(strings[i], strings[j]) > 0)
    			{
    				swap(strings[i], strings[j]);
    				}
    			}
    	}
    }
    void display()
    {
    	for (int i = 0; i < size; ++i)
    	    cout << strings[i] << " "<<endl;
    }
};

int main()
{
	Sort sc;
	cout<<"\nDays of the week\n";
    cout<<"................\n";
    sc.display();
    sc.sort();
    cout<<"\nDays of the week after sorting in alphabetical order\n";
    cout<<".......................................................\n";
	sc.display();
    cout<<endl;
	return 0;
}
