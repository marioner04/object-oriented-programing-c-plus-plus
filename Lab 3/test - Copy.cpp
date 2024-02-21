#include <iostream>
#include "point.h"
using namespace std;

int main() {
    double x = 0;
    double y = 0;
    Point p = Point(x, y);

    p.move(1, 1);
    cout << "After move: (" << p.getX() << ", " << p.getY() << ")\n";

    p.move(2, 3);
    cout << "After move: (" << p.getX() << ", " << p.getY() << ")\n";


    return 0;


    
}
