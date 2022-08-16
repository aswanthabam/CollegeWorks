/*
 Author : Aswanth V C
*/
#include<iostream>
using namespace std;
class Matrix
{
	int a[10][10],n;
	public:
	void get();
	void trace();
	void transpose();
};
int main()
{
	Matrix m;
	m.get();
	m.transpose();
	m.trace();
	return 0;
}
void Matrix::get(){
	int temp;
	cout<<"Enter order of square matrix: ";
	cin>>n;
	cout<<"Enter elements: \n";
	// Reciving matrix
	for(int i = 0;i < n; i++)
	{
		for(int j = 0;j<n;j++)
		{
			cin>>temp;
			a[i][j] =  temp;
		}
	}
	// Printing matrix
	// Extra loops is for printing matrix more user friendly
	cout<<"\nMatrix: \n|";
	for(int i = 0;i < n+1;i++) cout<<"\t";
	cout<<"|\n";
	for(int i = 0;i < n; i++)
	{
		cout<<"|\t";
		for(int j = 0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"|\n|";
		for(int i = 0;i < n+1;i++) cout<<"\t";
		cout<<"|\n";
	}
}
void Matrix::trace()
{
	int trace = 0;
	for(int i = 0;i < n;i++)
		for(int j = 0;j <n;j++)
			if(i == j)
				trace += a[i][j];
	cout<<"\nTrace is "<<trace<<endl;
}
void Matrix::transpose()
{
	cout<<"\nTranspose Matrix is: \n|";
	for(int i = 0;i < n+1;i++) cout<<"\t";
	cout<<"|\n";
	for(int i = 0;i < n;i++)
	{
		cout<<"|\t";
		for(int j = 0;j <n;j++)
			cout<<a[j][i]<<"\t";
		cout<<"|\n|";
		for(int i = 0;i < n+1;i++) cout<<"\t";
		cout<<"|\n";
	}
}