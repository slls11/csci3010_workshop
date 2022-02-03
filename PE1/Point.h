#ifndef POINT_H
#define POINT_H
using namespace std;

/*
Header for PE1
*/

class Point{
    public:
        Point(); //deafult, (0,0) constructer
        Point(int x, int y); //regualr constructer

        int get_x(); //gets x-coord, defined in Point.cpp
        int get_y(); //gets y-coord, defined in Point.cpp

        void set_x(int num); //gets y-coord, defined in Point.cpp
        void set_y(int num); //gets y-coord, defined in Point.cpp

        float Distance(Point &point2); //finds dist between 2 points, defined in Point.cpp
        void Translate(int num); //translates coords of 1 point, deinfed in Point.cpp 
        
    private:
        int x; // object x value
        int y; // object y value
};

#endif