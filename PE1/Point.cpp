#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

/*
Function defintions for PE1
*/

// defualt constructer, (0,0)
Point::Point(){
    x = 0;
    y = 0;
}

// regualr constructer (x,y)
Point::Point(int num1, int num2){
    x = num1;
    y = num2;
}

int Point::get_x(){
return x;
}

int Point::get_y(){
return y;
}

void Point::set_x(int num){
    x = num;
}

void Point::set_y(int num){
    y = num;
}

// find distance use pythagorean theorem and sqrt
float Point::Distance(Point &point2){

    float dist_x = (point2.get_x() - get_x()) * (point2.get_x() - get_x());
    float dist_y = (point2.get_y() - get_y()) * (point2.get_y() - get_y());
    float dist_c = sqrt(dist_x + dist_y);

return dist_c;
}

// moves x and y by num value
void Point::Translate(int num){
    x = x + num;
    y = y + num;
}
