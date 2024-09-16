/* 3. Write a C++ program to create a class called Shape with a method called getArea(). Create a derived class called Rectangle that overrides the getArea() method to calculate the area of a rectangle. */
#include <iostream>
using namespace std;

class Shape
{
public:
    void getArea()
    {
        cout << "Area of rectangle"<<endl;
    }
};

class Rectangle :public Shape  
{
    private :
       float length;
       float breath;
    public :
        void getArea()
    {
        cout << " Enter length of rectangle : ";
        cin>>length;
        cout<<" Enter width of rectangle : ";
        cin>>breath;
        cout<<"Area of the rectangle is : "<<length*breath;
    }
};

int main()
{
    Rectangle area;
    area.getArea();
}

/*
 Enter length of rectangle : 10
 Enter width of rectangle : 5
Area of the rectangle is : 50
*/
