#include <iostream>
using namespace std;
class String
{
    char str[20];
public:
    void read()
    {
        cin>>str;
    }
    void operator ==(String s)
    {
        int i=0,flag=1;
        while(str[i]!='\0'||s.str[i]!='\0')
        {
            if(str[i]!=s.str[i])
                flag= 0;
            i++;
        }
        if(flag==1)
        {
            cout<<"\nStrings are equal\n";
            cout<<"..................................\n\n";
        }
        else
        {
            cout<<"\nStrings are not equal\n";
            cout<<"..................................\n\n";
        }
    }
};
int main()
{
    String s1,s2;
    cout<<"\n..................................";
    cout<<"\nEnter first string: ";
    s1.read();
    cout<<"\nEnter second string: ";
    s2.read();
    s1==s2;
    return 0;
}
