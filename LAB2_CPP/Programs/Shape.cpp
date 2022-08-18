//SHAPES
#include <iostream>
using namespace std;
class Shape
{
	public:
	double a,b;
	void get_data(double x, double y)
	{
		a=x;
		b=y;
	}
	virtual void display_area()
	{
		cout<<"\nArea of triangle and rectangle\n";
	}
};
class Triangle: public Shape
{
	public:
	void display_area()
	{
		cout<<"\nArea of triangle = "<<((1/2.0)*a*b)<<endl;
	}
};
class Rectangle: public Shape
{
	public:
	void display_area()
	{
		cout<<"Area of rectangle= "<<(a*b)<<endl<<endl;
	}
};
int main()
{
	Triangle T;
	Rectangle R;
	T.get_data(4,2);
	R.get_data(8,15);
	T.display_area();
	R.display_area();
	return 0;
}

