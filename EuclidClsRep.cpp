/*

* Basic computational geometry exercise - Euclidean Distance.
* Object Oriented approach.
* (c) 2026, Arindam Bala.

*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const double EPS = 1e-6;

/* =======================
    Point Class
   ======================= */

class Point
{
    public:
        double x, y;
        Point(double x = 0, double y = 0) : x(x), y(y) {}

        double distanceTo(const Point& other) const {
            return hypot(x - other.x, y - other.y);
        }

        bool operator==(const Point& other) const {
            return distanceTo(other) <= EPS;
        }
};

/* =======================
    Rectangle Class
   ======================= */

class Rectangle
{
    private:
        Point lle, upr;
    
    public:
        Rectangle(Point a, Point b)
            : lle( min(a.x, b.x), min(a.y, b.y) ), upr( max(a.x, b.x), max(a.y, b.y) ) {}
        
        double area() const {
            return (upr.x - lle.x) * (upr.y - lle.y);
        }
};