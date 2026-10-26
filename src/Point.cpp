#include "Point.hpp"
#include <iostream>

Point::Point()
{
    this->coords.push_back(0.0);
}

Point::Point(const int& size)
{
    std::vector<double> tmp(size);
    this->coords = tmp;
}

Point::Point(const std::vector<double>& coords)
{
    this->coords = coords;
}

Point::~Point()
{
}

std::vector<double> Point::getCoords(){
    return this->coords;
}

void Point::addCoord(const double& coord){
    this->coords.push_back(coord);
}

void Point::toString() {
    for (size_t i = 0; i < this->coords.size(); i++)
    {
        std::cout << "coordonnée " << i << " : " <<
            this->coords[i];

    }
    
}