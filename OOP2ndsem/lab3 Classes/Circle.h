#ifndef Circle_h
#define Circle_h
#include <string>
using namespace std;

class Circle3
{

private:

    double radius;
    string color;

public:
    Circle3();
    Circle3(string col, double rad);
    double getRadius();
    void setRadius(double r);
    string getColor();
    void setColor(string s);

    double getArea() const;

    void description(); //initializing the desc. function//

    const Circle3& compare_area(const Circle3& crcl) const; //comparison area dec//
};
#endif