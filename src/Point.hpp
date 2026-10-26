#pragma once

class Point
{
    private:
        double x, y, z;
    public:
        Point();
        Point(const double& x, const double& y, const double& z);
        
        double getX();
        double getY();
        double getZ();
        
        void setX(const double& x);
        void setY(const double& y);
        void setZ(const double& z);

        void toString();
        
        ~Point();
};

