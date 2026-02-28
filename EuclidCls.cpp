/*

* Basic computational geometry exercise - Euclidean Distance.
* Object Oriented approach.
* (c) 2026, Arindam Bala.

*/

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

const double EPS = 1e-6;

/* =======================
    Point Class
   ======================= */

class Point
{
    public:
        double x, y;
    
        // Constructor
        Point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

        // Calculate Distance Method
        double distanceTo(const Point &other) const {
            double dx = x - other.x;
            double dy = y - other.y;
            return sqrt(dx * dx + dy * dy);
        }

        // Equality Tolerance Check Method
        bool equals(const Point &other) const {
            return distanceTo(other) <= EPS;
        }
};

/* =======================
    Rectangle Class
   ======================= */

class Rectangle
{
    private:
        Point lle; // Lower-left 
        Point upr; // Upper-right
    
    public:

        // Corner Normalise Constructor
        Rectangle(Point a, Point b) {
            lle.x = min(a.x, b.x);
            lle.y = min(a.y, b.y);
            upr.x = max(a.x, b.x);
            upr.y = max(a.y, b.y);
        }

        double area() const {
            return (upr.x - lle.x) * (upr.y - lle.y);
        }

        bool contains(const Point &p) const {
            return (p.x >= lle.x && p.x <= upr.x && p.y >= lle.y && p.y <= upr.y);
        }

        // Rectangle lies within another rectangle
        bool contains(const Rectangle &other) const {
            return contains(other.lle) && contains(other.upr);
        }
};

/* =======================
    Geometry Logic
   ======================= */

void findFarthestPair(const vector<Point> &points)
{
    if (points.size() < 2) return;

    double maxDist = -1.0;
    Point p1, p2;

    for (size_t i = 0; i < points.size(); ++i)
    {
        for (size_t j = i + 1; j < points.size(); ++j)
        {
            double d = points[i].distanceTo(points[j]);

            if (d > maxDist)
            {
                maxDist = d;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }

    cout << "\n |> Farthest pair : (" << p1.x << "," << p1.y << ") and (" << p2.x << "," << p2.y << ") with Distance : " << maxDist << endl;
}

/* =======================
    Main Function
   ======================= */

int main()
{
    double x, y;

    cout << "\n\nEnter Point 1 (x y) : ";
    cin >> x >> y;
    Point p1(x, y);

    cout << "\nEnter Point 2 (x y) : ";
    cin >> x >> y;
    Point p2(x, y);

    Rectangle rect(p1, p2);
    cout << fixed << setprecision(2);
    cout << "\n\n Rectangle Area : " << rect.area() << endl;

    // Farthest Pair
    int numPoints = 4;
    vector<Point> points;

    cout << "\nEnter " << numPoints << " points for farthest pair search : \n";

    for (int i = 0; i < numPoints; ++i)
    {
        cout << "Point " << (i + 1) << ": ";
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    findFarthestPair(points);

    return 0;
}