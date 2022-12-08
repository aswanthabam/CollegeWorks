#include <iostream>

using namespace std;

class Shape{
public:
    double dim1,dim2;
    void get_data(double x, double y){
        dim1=x;
        dim2=y;
    }
    virtual void display_area(){};
};

class Rectangle:public Shape{
public:
    void display_area(){
        cout<<"Area is: "<<dim1*dim2<<endl;
    }
};
class Triangle:public Shape{
public:
    void display_area(){
        cout<<"Area is: "<<(1.0/2.0)*dim1*dim2<<endl;
    }
};

int main(){
    double a,b;
    Shape *s;
    Triangle T;
    Rectangle R;
    s=&T;
    //cout<<"enter dimesions for Triangle: ";cin>>a>>b;
    s->get_data(3,4);
    s->display_area();
    s=&R;
    //cout<<"enter dimesions for Rectangle: ";cin>>a>>b;
    s->get_data(4,6);
    s->display_area();
}