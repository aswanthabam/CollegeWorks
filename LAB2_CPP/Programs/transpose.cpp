#include <iostream>
using namespace std;
class matrix
{
 public:
    int m, n, i, j, a[10][10], t[10][10], sum=0;
    void getdata();
    void trace();
    void transpose();
};
void matrix::getdata()
{
    cout<<"\nEnter order of matrix : ";
    cin>>m>>n;
    cout<<"\nEnter array elements : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void matrix::trace()
{
    if(m==n)
    {
       for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        cout<<"\nTrace of the matrix is "<<sum<<endl<<endl;
    }
    else
        cout<<"\nTrace cannot be found since the matrix is not a square matrix\n"<<endl;
}
void matrix::transpose()
{
    cout<<"\nTranspose of the matrix is"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix M;
    M.getdata();
    M.transpose();
    M.trace();
}
