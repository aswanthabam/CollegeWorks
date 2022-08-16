#include<iostream>
using namespace std;

class Shape
{
	public:
	float a,b,c;
	float area(float); // For Sphear
	float volume(float); // For Sphear
	float area(float,float); // For Cylinder
	float volume(float,float); // For Cylinder
	float area(float,float,float);//For cube
	float volume(float,float,float);//For cube
};

float Shape::area(float a)
{
	// Area of sphere 4πr²
	return 4.0*3.14*a*a;
}
float Shape::area(float a,float b)
{
	// Area of cylinder 2πr(r+h)
	return 2.0*3.14*a*(a+b);
}
float Shape::area(float a,float b,float c)
{
	// Area of cube 2(lw+lh+hw)
	return 2.0*(a*b+a*c+c*b);
}


float Shape::volume(float a)
{
	// Volume of sphere 4/3πr³
	return (4/3.0)*3.14*(a*a*a);
}
float Shape::volume(float a,float b)
{
	// Volume of cylinder πr²h
	return 3.14*a*a*b;
}
float Shape::volume(float a,float b,float c)
{
	// volume of cube lbh
	return a*b*c;
}

int main()
{
	int n;
	Shape sh;
	cout<<"Enter:\n 1) Cube\n 2) Sphear\n 3) Cylinder\n Choose: ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter sides of cube: ";
			cin>>sh.a>>sh.b>>sh.c;
			cout<<"Area is "<<sh.area(sh.a,sh.b,sh.c)
			<<"\nVolume is "<<sh.volume(sh.a,sh.b,sh.c)<<endl;
			break;
		case 2:
			cout<<"Enter radius of sphear: ";
			cin>>sh.a;
			cout<<"Area is "<<sh.area(sh.a)
			<<"\nVolume is "<<sh.volume(sh.a)<<endl;
			break;
		case 3:
			cout<<"Enter Radius and height of cylinder: ";
			cin>>sh.a>>sh.b;
			cout<<"Area is "<<sh.area(sh.a,sh.b)
			<<"\nVolume is "<<sh.volume(sh.a,sh.b)<<endl;
			break;
	}
	return 0;
}