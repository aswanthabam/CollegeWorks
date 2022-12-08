#include<iostream>
using namespace std;
int Binary(int a[],int n,int e)
{
    int mid, l=0, r=n;
    while(l<=r)
    {
        mid=(r+l)/2;
        cout<<mid<<endl;
        if(a[mid]==e)
        {
            return mid;
        }
        else if(e<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int data, x;
    cout<<"Enter the element to check"<<endl;
    cin>>data;
    x=Binary(a,10,data);
    if(x==-1)
    {
        cout<<"Element not found in the array"<<endl;
    }
    else
    {
        cout<<"Element is found at index "<<x<<endl;
    }
    return 0;
}
