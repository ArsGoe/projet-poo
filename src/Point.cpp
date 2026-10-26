#include "Point.hpp"
#include <iostream>

Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(const double& x, const double& y, const double& z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::~Point()
{
}

double Point::getX(){
    return this->x;
}
        
double Point::getY(){
    return this->y;
}

double Point::getZ(){
    return this->z;
}
        

void Point::setX(const double& x){
    this->x = x;
}

void Point::setY(const double& y){
    this->y = y;
}

void Point::setZ(const double& z){
    this->z = z;
}

void Point::toString() {
    std::cout << "x : " << this->x << " y : " << this->y << " z : " << this->z << std::endl;
}