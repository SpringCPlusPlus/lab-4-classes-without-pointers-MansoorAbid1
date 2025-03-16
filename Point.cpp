#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

Point::Point(double xCoor, double yCoor) {
    x = xCoor;
    y = yCoor;
}

double Point::distanceTo(const Point& other) const{
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2));
}

void Point::print() const{
    cout<< "x is " << x << " and y is " << y;
}
