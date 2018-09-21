#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct point {
	double x;
	double y;
};


void init_point2(point* ptr, char* sx, char* sy) {
	(*ptr).x = atof(sx);
	(*ptr).y = atof(sy);
}

void init_point1(point *ptr, double xx, double yy) { 
	(*ptr).x = xx;
	(*ptr).y = yy;
}

double dist(point p1, point p2) {
	double dx = p1.x - p2.x;
	double dy = p1.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}


int main()
{
	point p, q;

	init_point1(&p, 3.0, 4.0);
	init_point2(&q, "-3.0", "-4.0");

	cout << dist(p, q) << endl;

}
