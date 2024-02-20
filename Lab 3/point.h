#ifndef POINT_H
#define POINT_H

class Point {
    public: 
        Point (double xval, double yval);
        void move (double dx, double dy);
        double getX() const;
        double getY() const;

    private:
        double x;
        double y;
};

#endif

