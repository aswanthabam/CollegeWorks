// AREA AND VOLUME OF FIGURES
#include<iostream>
using namespace std;

class Shape
{
	public:
	float a,b,c;
	void area(float); // For Sphear
	void volume(float); // For Sphear
	void area(float,float); // For Cylinder
	void volume(float,float); // For Cylinder
	void area(float,float,float);//For cube
	void volume(float,float,float);//For cube
};

void Shape::area(float a)
{
	// Area of sphere 4πr²
	cout<<"Area of sphere = "<<4.0*3.14*a*a<<" sq. cm"<<endl;
}
void Shape::area(float a,float b)
{
	// Area of cylinder 2πr(r+h)
	cout<<"Area of cylinder = "<<2.0*3.14*a*(a+b)<<" sq. cm"<<endl;
}
void Shape::area(float a,float b,float c)
{
	// Area of cube 2(lw+lh+hw)
	cout<<"Area of cube = "<<2.0*(a*b+a*c+c*b)<<" sq. cm"<<endl;
}


void Shape::volume(float a)
{
	// Volume of sphere 4/3πr³
	cout<<"Volume sphere of  = "<<(4/3.0)*3.14*(a*a*a)<<" cubic. cm"<<endl;
}
void Shape::volume(float a,float b)
{
	// Volume of cylinder πr²h
	cout<<"Volume cylinder of  = "<<3.14*a*a*b<<" cubic. cm"<<endl;
}
void Shape::volume(float a,float b,float c)
{
	// volume of cube lbh
	cout<<"Volume cube of  = "<<a*b*c<<" cubic. cm"<<endl;
}

int main()
{
	int n;
	Shape sh;
	cout<<"Menu\n************************\n 1. For Cube\n 2. For Sphere\n 3. For Cylinder\n\nChoose an option : ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter sides of cube: ";
			cin>>sh.a>>sh.b>>sh.c;
			sh.area(sh.a,sh.b,sh.c);
			sh.volume(sh.a,sh.b,sh.c);
			break;
		case 2:
			cout<<"Enter radius of sphere: ";
			cin>>sh.a;
			sh.area(sh.a);
			sh.volume(sh.a);
			break;
		case 3:
			cout<<"Enter Radius and height of cylinder: ";
			cin>>sh.a>>sh.b;
			sh.area(sh.a,sh.b);
			sh.volume(sh.a,sh.b);
			break;
		default:cout<<"Invalid choice!"<<endl;
	}
	return 0;
}