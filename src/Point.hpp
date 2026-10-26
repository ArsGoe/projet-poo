#pragma once

#include <vector>

class Point
{
    private:
        std::vector<double> coords;
    public:
        Point();
        Point(const int& size);
        Point(const std::vector<double>& coords);
        
        std::vector<double> getCoords();

        void addCoord(const double& coord);

        void toString();
        
        ~Point();
};

