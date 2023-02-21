#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};


double overlap(Rect r1, Rect r2)
{
    double w, h;
    w = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x) ;
    h = min(r1.y, r2.y) - max(r1.x - r1.h, r2.y - r2.h) ;
    
    if(w <= 0 || h <= 0) return 0;
    return w*h;
}
// #include<iostream>
// #include<cmath>
// using namespace std;

// struct Rect{
// 	double x,y,w,h;
// };

// double overlap(Rect r1, Rect r2)
// {
//     double w, h;
//     w = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x) ;
//     h = abs(max(r1.x - r1.h, r2.y - r2.h)) + min(r1.y, r2.y);
    
//     if(w < 0 || h < 0) return 0;
//     return w*h;
// }