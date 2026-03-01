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
        Rectangle(const Point& a, const Point& b)
            : lle( min(a.x, b.x), min(a.y, b.y) ), upr( max(a.x, b.x), max(a.y, b.y) ) {}
        
        double area() const {
            return (upr.x - lle.x) * (upr.y - lle.y);
        }

        bool contains(const Point& p) const {
            return (p.x >= lle.x && p.x <= upr.x && p.y >= lle.y && p.y <= upr.y);
        }
};

/* =======================
    Geometry Logic
   ======================= */

void findFarthestPair(const vector<Point>& points) {
    if (points.size() < 2) return;

    double maxDist = -1.0;
    Point p1, p2;

    for (size_t i = 0; i < points.size(); ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            double d = points[i].distanceTo(points[j]);
            if (d > maxDist) {
                maxDist = d;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }

    cout << "\n |> Farthest pair: (" << p1.x << "," << p1.y << ") and (" << p2.x << "," << p2.y << ")\n |> Distance: " << maxDist << "\n";
}

/* =======================
    Main Function
   ======================= */

int main() 
{
    /* // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); */

    double x, y;
    
    cout << "\n\nEnter Point 1 (x y) : ";
    if (!(cin >> x >> y)) return 1;
    Point p1(x, y);

    cout << "\nEnter Point 2 (x y) : ";
    if (!(cin >> x >> y)) return 1;
    Point p2(x, y);

    Rectangle rect(p1, p2);
    cout << fixed << setprecision(2);
    cout << "Rectangle Area: " << rect.area() << "\n";

    const int numPoints = 4;
    vector<Point> points;
    points.reserve(numPoints); 

    cout << "\nEnter " << numPoints << " points for the farthest-pair search: \n";
    for(int i = 0; i < numPoints; ++i) {
        cout << "Point " << i + 1 << ": ";
        if (cin >> x >> y) {
            points.emplace_back(x, y);
        }
    }

    findFarthestPair(points);

    return 0;
}