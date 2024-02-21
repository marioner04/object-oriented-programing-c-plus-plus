#include "point.h"

using namespace std;

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::move(double dx, double dy){
    x = x + dx;
    y = y + dy;
}

double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}