// PROGRAM TO FIND THE TRACE AND TRANSPOSE OF A MATRIX
#include<iostream>
using namespace std;
class Matrix
{
	int a[10][10],m,n;
public:
	void get()
	{
		int temp;
		cout<<"Enter order of square matrix(m,n): ";
		cin>>m>>n;
		cout<<"Enter elements: \n";
		// GETTING MATRIX
		for(int i = 0;i < m; i++)
		{
			for(int j = 0;j<n;j++)
			{
				cin>>temp;
				a[i][j] =  temp;
			}
		}
	}
	void trace()
	{
		if(m!=n)
		{
			cout<<"\nTrace cannot be found since the matrix is not a square matrix\n";
			return; // NOT A SQUARE MATRIX ,RETURN
		}
		int trace = 0;
		for(int i = 0;i < m;i++)
			for(int j = 0;j <n;j++)
				if(i == j)
					trace += a[i][j];
		cout<<"\nTrace is : "<<trace<<endl;
	}
	void transpose()
	{
		cout<<"\nTranspose of the Matrix is: \n";
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j <m;j++)
				cout<<a[j][i]<<"\t";
			cout<<"\n";
		}
	}
};
int main()
{
	Matrix m;
	m.get();
	m.transpose();
	m.trace();
	return 0;
}