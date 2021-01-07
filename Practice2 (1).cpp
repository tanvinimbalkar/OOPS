/*
Tanvi A Nimbalkar
SECOB253
DIV:B
*/
#include<iostream>
using namespace std;

class Shape
{
	public: double a,b;
	double get_data()
	{
		cout<<"\nEnter the length and width of Rectangle : \n";
		cin>>a>>b;
		return a*b;
	}	
	void display_area(double area)
	{
		cout<<"Area of Rectange is: "<<area;
	}
	void get_data(int c)
	{
		cout<<"Enter the height and base of Triangle : \n";
		cin>>a>>b;
	}	
	void display_area()
	{
		cout<<"Area of Triangle is: "<<0.5*a*b;
	}
};
class Triangle:public Shape  {};

class Rectangle:public Shape  {};

int main()
{
	Triangle t;
	t.get_data(1);
	t.display_area();
	Rectangle r;
	r.display_area(r.get_data());
	
	return 0;
}