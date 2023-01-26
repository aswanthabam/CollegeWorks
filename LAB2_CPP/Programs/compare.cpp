//STRING COMPARISON
#include <iostream>
using namespace std;
class String
{
    char str[50];
public:
    void read()
    {
        cin.getline(str,50);
    }
    void operator ==(String s)
    {
        int flag=1;
        for(int i = 0;str[i]!='\0'||s.str[i]!='\0';i++)
        {
            if(str[i]!=s.str[i]) flag= 0;
        }
        if(flag==1)
            cout<<"\nStrings are equal\n";
        else
            cout<<"\nStrings are not equal\n";
    }
};
int main()
{
    String s1,s2;
    cout<<"\nEnter first string: ";
    s1.read();
    cout<<"\nEnter second string: ";
    s2.read();
    s1==s2;
    return 0;
}
