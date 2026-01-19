/*

* Basic computational geometry exercise - Euclidean Distance.
* Did this back in first year (2019) of university, sigh....</3.
* (c) 2026, Arindam Bala.

*/

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define EPS 0.000001f // Epsilon | abs(a - b) <= ε


/* =======================
    Structure Declarations
   ======================= */

struct point {
    int x;
    int y;
};

struct rect {
    struct point lle; // Lower-left Point
    struct point upr; // Upper-right Point
};


/* =======================
    Function Declarations
   ======================= */

float POINTdist(struct point, struct point); // Distance between points

int POINTeq(struct point, struct point); // Point Equality with tolerance

struct rect RECTcreate(struct point, struct point); // Normalised Rectangle

float RECTarea(struct rect); // Rectangle Area

int POINTin(struct rect, struct point); // Point lies inside rectangle

int RECTcheck(struct rect, struct rect); // Rectangle lies within another rectangle

void ptApart(struct point P[]); // Farthest pair amongst points


/* =======================
    Main Function
   ======================= */

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    struct point pt1, pt2, pt3;
    struct point pt4, pt5;
    struct rect rect1, rect2;
    struct point ptArr[6];

    printf("\nEnter first point (x y): ");
    scanf("%d %d", &pt1.x, &pt1.y);

    printf("Enter second point (x y): ");
    scanf("%d %d", &pt2.x, &pt2.y);


    /* Distance & Equality check */
    float dist = POINTdist(pt1, pt2);
    printf("\nDistance between points: %.3f\n", dist);

    if (POINTeq(pt1, pt2)) { printf("\n |> Points are equal (within \u03B5)  !\n"); }
    else { printf("\n |> Points are different!\n"); }


    /* Rectangle 1 */
    rect1 = RECTcreate(pt1, pt2);
    printf("\nArea of the rectangle 1: %.3f\n", RECTarea(rect1));


    /* Point in rectangle check */
    printf("\nEnter a point to test inside rectangle 1 (x y): ");
    scanf("%d %d", &pt3.x, &pt3.y);

    if (POINTin(rect1, pt3)) { printf("\n |> YES! Point lies inside Rectangle 1....!\n"); }
    else { printf("\n |> NO! Point lies outside Rectangle 1....!\n"); }


    /* Rectangle 2 */
    printf("\nEnter first point of rectangle 2 (x y): ");
    scanf("%d %d", &pt4.x, &pt4.y);

    printf("Enter second point of rectangle 2 (x y): ");
    scanf("%d %d", &pt5.x, &pt5.y);

    rect2 = RECTcreate(pt4, pt5);

    if (RECTcheck(rect1, rect2)) { printf("\n |> YES! Rectangle 2 lies inside Rectangle 1....!\n"); }
    else { printf("\n |> NO! Rectangle 2 does NOT lie inside Rectangle 1....!\n"); }


    /* Farthest-apart Points */
    printf("\nEnter the co-ordinates to find the farthest pair: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("Point %d (x y): ", i + 1);
        scanf("%d %d", &ptArr[i].x, &ptArr[i].y);
    }

    ptApart(ptArr);

    return 0;
}


/* =======================
    Function Definitions
   ======================= */

float POINTdist(struct point a, struct point b)
{
    float dx = (float)(a.x - b.x);
    float dy = (float)(a.y - b.y);

    return sqrtf(dx * dx + dy * dy);
}

int POINTeq(struct point a, struct point b)
{
    return POINTdist(a, b) <= EPS;
}

struct rect RECTcreate(struct point a, struct point b)
{
    struct rect rec;

    rec.lle.x = (a.x < b.x) ? a.x : b.x;
    rec.lle.y = (a.y < b.y) ? a.y : b.y;

    rec.upr.x = (a.x > b.x) ? a.x : b.x;
    rec.upr.y = (a.y > b.y) ? a.y : b.y;

    return rec;
}

float RECTarea(struct rect rec)
{
    float width = (float)(rec.upr.x - rec.lle.x);
    float height = (float)(rec.upr.y - rec.lle.y);

    return width * height;
}

int POINTin(struct rect rec, struct point pt)
{
    return pt.x >= rec.lle.x && pt.x <= rec.upr.x && pt.y >= rec.lle.y && pt.y <= rec.upr.y;
}

int RECTcheck(struct rect outer, struct rect inner)
{
    return POINTin(outer, inner.lle) && POINTin(outer, inner.upr);
}

void ptApart(struct point P[6])
{
    float maxDist = 0.0f;
    struct point pt1 = P[0], pt2 = P[0];

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            float dist = POINTdist(P[i], P[j]);

            if (dist > maxDist)
            {
                maxDist = dist;
                pt1 = P[i];
                pt2 = P[j];
            }
        }
    }

    printf("\n |> Maximum Euclidean Distance between (%d, %d) & (%d, %d) : %.3f", pt1.x, pt1.y, pt2.x, pt2.y, maxDist);
}