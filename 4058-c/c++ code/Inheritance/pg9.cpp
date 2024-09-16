/* 9. Write a C++ program to create a vehicle class hierarchy. The base class should be Vehicle, with derived classes Truck, Car and Motorcycle. Each derived class should have properties such as make, model, year, and fuel type. Implement methods for calculating fuel efficiency, distance traveled, and maximum speed. */
#include<iostream>
using namespace std;

class Vehicle
{
    public:

        char make[20];
        char model[20];
        int year;
        char fuelType[20];  
        void fuelEfficiency()
		{
	        float litre,kilometrs,fuelEfficiency;
	        cout<<"Enter the fuel consumed by your vhicle in liter: ";
	        cin>>litre;
	        cout<<"Enter the distance you covers in the fuel consumed in km : ";
	        cin>>kilometrs;
	        fuelEfficiency = kilometrs/litre;
	        cout<<"The fuelEfficiency of your vhicle is : "<<fuelEfficiency<<"km/lit"<<endl;
	    }
	    void distanceTraveled()
		{
	        float speed,time,distance;;   
	        cout<<"Enter the speed of your vhicle in miles/h : ";
	        cin>>speed;
	        cout<<"Enter the time you reach at your destination in hour or minutes : ";
	        cin>>time;
	        distance = speed*time;
	        cout<<"The distance you traveles is : "<<distance<<"km";
	    }
};

class Truck :public Vehicle
{
    private:
        char make[20];
        char model[20];
        int year;
        char fuelType[20]; 
};

int main()
{
    Truck a;
    a.fuelEfficiency();
    a.distanceTraveled();   
}

/*
Enter the fuel consumed by your vhicle in liter: 50
Enter the distance you covers in the fuel consumed in km : 20
The fuelEfficiency of your vhicle is : 0.4km/lit
Enter the speed of your vhicle in miles/h : 5
Enter the time you reach at your destination in hour or minutes : 4
The distance you traveles is : 20km
*/

