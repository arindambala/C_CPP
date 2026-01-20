/*

* Basic computational geometry exercise - Euclidean Distance.
* Procedural approach.
* (c) 2026, Arindam Bala.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

using namespace std;

const float EPS = 1e-6f; // Epsilon | abs(a - b) <= ε

/* =======================
    Structure Declarations
   ======================= */

struct point { int x, y; };

struct rect { point lle, upr; }; // Lower-left Point | Upper-right Point


/* =======================
    Function Declarations
   ======================= */

float POINTdist(point, point); // Distance between points

int   POINTeq(point, point); // Point Equality with tolerance

rect  RECTcreate(point, point); // Normalised Rectangle

float RECTarea(rect); // Rectangle Area

int   POINTin(rect, point); // Point lies inside rectangle

int   RECTcheck(rect, rect); // Rectangle lies within another rectangle

void  ptApart(const vector<point>&); // Farthest pair amongst points


/* =======================
    Main Function
   ======================= */

int main()
{
    point pt1{}, pt2{}, pt3{}, pt4{}, pt5{};
    rect rect1{}, rect2{};
    vector<point> ptArr;

    cout << "\nEnter first point (x y): ";
    cin >> pt1.x >> pt1.y;

    cout << "Enter second point (x y): ";
    cin >> pt2.x >> pt2.y;

    /* Distance & Equality check */
    float dist = POINTdist(pt1, pt2);
    cout << fixed << setprecision(3) << "\nDistance between points: " << dist << endl;

    if (POINTeq(pt1, pt2)) cout << "\n |> Points are equal (within \u03B5) !" << endl;
    else cout << "\n |> Points are different !" << endl;

    /* Rectangle 1 */
    rect1 = RECTcreate(pt1, pt2);
    cout << "\nArea of the rectangle 1: " << RECTarea(rect1) << endl;

    /* Point in rectangle check */
    cout << "\nEnter a point to test inside rectangle 1 (x y): ";
    cin >> pt3.x >> pt3.y;

    if (POINTin(rect1, pt3)) cout << "\n |> YES! Point lies inside Rectangle 1....!" << endl;
    else cout << "\n |> NO! Point lies outside Rectangle 1....!" << endl;

    /* Rectangle 2 */
    cout << "\nEnter first point of rectangle 2 (x y): ";
    cin >> pt4.x >> pt4.y;

    cout << "Enter second point of rectangle 2 (x y): ";
    cin >> pt5.x >> pt5.y;

    rect2 = RECTcreate(pt4, pt5);
    
    if (RECTcheck(rect1, rect2)) cout << "\n |> YES! Rectangle 2 lies inside Rectangle 1....!" << endl;
    else cout << "\n |> NO! Rectangle 2 does NOT lie inside Rectangle 1....!" << endl;

    /* Farthest-apart Points */
    cout << "\nEnter the co-ordinates to find the farthest pair: " << endl;
    for (int i = 0; i < 6; i++)
    {
        point pt;
        cout << "Point " << i + 1 << " (x y): ";
        cin >> pt.x >> pt.y;
        ptArr.emplace_back(pt);
    }

    ptApart(ptArr);

    return 0;
}


/* =======================
    Function Definitions
   ======================= */

float POINTdist(point a, point b)
{
    float dx = static_cast<float>(a.x - b.x);
    float dy = static_cast<float>(a.y - b.y);

    // Numerical Stability
    return hypot(dx, dy);
}

int POINTeq(point a, point b)
{
    float dx = static_cast<float>(a.x - b.x);
    float dy = static_cast<float>(a.y - b.y);

    // Comparison
    return (dx * dx + dy * dy) <= (EPS * EPS);
}

rect RECTcreate(point a, point b)
{
    rect rec;

    rec.lle.x = min(a.x, b.x);
    rec.lle.y = min(a.y, b.y);

    rec.upr.x = max(a.x, b.x);
    rec.upr.y = max(a.y, b.y);

    return rec;
}

float RECTarea(rect rec)
{
    float width = static_cast<float>(rec.upr.x - rec.lle.x);
    float height = static_cast<float>(rec.upr.y - rec.lle.y);

    return width * height;
}

int POINTin(rect rec, point pt)
{
    return pt.x >= rec.lle.x && pt.x <= rec.upr.x && pt.y >= rec.lle.y && pt.y <= rec.upr.y;
}

int RECTcheck(rect outer, rect inner)
{
    return POINTin(outer, inner.lle) && POINTin(outer, inner.upr);
}

void ptApart(const vector<point>& P)
{
    if (P.empty()) return;

    float maxDistSq = -1.0f;
    point pt1 = P[0], pt2 = P[0];

    for (size_t i = 0; i < P.size(); ++i)
    {
        for (size_t j = i + 1; j < P.size(); ++j)
        {
            float dx = static_cast<float>(P[i].x - P[j].x);
            float dy = static_cast<float>(P[i].y - P[j].y);
            float distSq = dx * dx + dy * dy;

            if (distSq > maxDistSq)
            {
                maxDistSq = distSq;
                pt1 = P[i];
                pt2 = P[j];
            }
        }
    }

    cout << "\n |> Maximum Euclidean Distance between (" << pt1.x << ", " << pt1.y << ") & (" << pt2.x << ", " << pt2.y << ") : " << fixed << setprecision(3) << sqrt(maxDistSq) << endl;
}