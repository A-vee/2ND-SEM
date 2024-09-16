/* 8. Write a C++ program to create a class called Shape with methods called getPerimeter() and getArea(). Create a derived class called Circle that overrides the getPerimeter() and getArea() methods to calculate the area and perimeter of a circle. */
#include<iostream>
#include<iomanip>
using namespace std;
class shape 
{

    public:
	    float radius;
	    float perimeter;
	    float area;
	    float length;
	    float breath;

	public:
	    void getPerimeter()
		{
	        cout<<"Perimeter";
	    }
	    void getArea()
		{
	        cout<<"Area";
	    }
};

class Circle :public shape
{
    public:
	void getPerimeter()
	{
        cout<<"perimeter of a circle : "<<endl;
        cout<<"enter the radius of the circle : ";
        cin>>radius;
        perimeter = 3.14*2*radius;
        cout<<"The perimeter of the Circle is : "<<perimeter<<endl;
    }
    void getArea()
	{
        cout<<"Area of a circle : "<<endl;
        cout<<"enter the radius of the circle : ";
        cin>>radius;
        area = 3.14*radius*radius;
        cout<<"The Area of the circle is : "<<area<<endl;
    }  
};

int main()
{
    Circle a;
	a.getPerimeter();
    a.getArea();
}

/*
perimeter of a circle :
enter the radius of the circle : 1
The perimeter of the Circle is : 6.28
Area of a circle :
enter the radius of the circle : 1
The Area of the circle is : 3.14
*/    
