#include <iostream>
using namespace std;

const double PI=3.14;
class Circle{

private:
double radius;

public:
Circle(const double);
Circle();
Circle(const Circle&circle);
~Circle();

void setRadius(double radius);
double getRadius();
double getArea();
double getPerimeter();

};

Circle::Circle(double r){
  radius=r;
  cout<<"The parameter constructer is called"<<endl;
}
Circle::Circle(){
  cout<<"The default constructer is called"<<endl;
}
Circle::Circle(const Circle&circle) : radius(circle.radius){
  cout<<"The copy constructor is called"<<endl;
}
Circle::~Circle(){
  cout<<"The destructor is called"<<endl;
}

void Circle::setRadius(double rad){
   radius=rad;
}
double Circle::getRadius(){
  return radius;
}
double Circle::getArea(){
  return PI*radius*radius;
}
double Circle::getPerimeter(){
  return 2*PI*radius;
}

int main (){
  Circle obj1(6);
  cout<<"Radius of obj1: "<<obj1.getRadius()<<endl;
  cout<<"Area of obj1: "<<obj1.getArea()<<endl;
  cout<<"Perimeter of obj1: "<<obj1.getPerimeter()<<endl;
  
  Circle obj2;
  cout<<"Radius of obj2: "<<obj2.getRadius()<<endl;
  cout<<"area of obj2: "<<obj2.getArea()<<endl;
  cout<<"perimeter of obj2: "<<obj2.getPerimeter()<<endl;
  return 0;
}