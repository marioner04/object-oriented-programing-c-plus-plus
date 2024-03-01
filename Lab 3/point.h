#ifndef POINT_H
#define POINT_H

class Point {
    public: 
        Point();
        Point (double xval, double yval);
        void move (double dx, double dy);
        double getX() const;
        double getY() const;

    private:
        double x;
        double y;
};

#endif

