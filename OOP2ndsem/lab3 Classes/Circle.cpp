#define _USE_MATH_DEFINES

#include <iostream>
#include "Circle.h"
#include <math.h>
using namespace std;


	Circle3::Circle3()    //default//
	{
	    this->radius = 50;
	    this->color = "Red";
	}
	
	Circle3::Circle3(string col, double rad)   //parametrized//
	{
	    this->radius = rad;
	    this->color = col;
	}
	
	string Circle3::getColor()      //getters//
	{
	    cin >> this->color;
	    return this->color;
	}
	
	
	void Circle3::setColor(string col)    //setters//
	{
	    this->color = col;
	}
	
	void Circle3::setRadius(double rad)
	{
	    this->radius = rad;
	}
	
	double Circle3::getRadius()
	{
	    return this->radius;
	}
	
	
	double Circle3::getArea()const
	{
	    return M_PI * this->radius*this->radius;  //with use of math.h we get Pi//
	}
	
	const Circle3 & Circle3::compare_area(const Circle3 & crcl)const
	{
	    if (crcl.getArea() > getArea())     //if circle1 area is larger than circle2
	        return crcl;                    // then returns the circle1, else the second//
	    else
	    {
	        return *this;
	    }
	}
	
	void Circle3::description()
	{
	    cout << "This is a circle of colour: " << this->color << " with radius of:";
	    cout << this->radius << " and the area:" << getArea() << endl;
	    //this is the full description function with the 'this' pointers, pointing
	    // to the corresponding values obtained via the previous functions//
	}