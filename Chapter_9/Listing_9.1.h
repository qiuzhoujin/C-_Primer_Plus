// coordin.h -- structure templates and function prototypes
// structure templates
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance;      // distance from origin
	double angle;         // direction form origin
};

struct rect
{
	double x;             // horizontal distance from origin
	double y;             // vertical distance form origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
