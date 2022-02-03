#include <iostream>
#include "Point.h"
using namespace std;

/*
CSCI 3010, PE2
Slav Ivanovich
Instructions:
            1. type "make" into command line
            2. type "./main" into command line
            3. if needed, type "make clean" to clear all .o files
*/

int main(){

    vector <int> vec2 = {5,9,6};
    vector <int> vec3 = {9,7,8};

    Point p0(2);
    Point p1(3);
    Point p2(vec2);
    Point p3(vec3);

    cout << endl;
    cout << "How many dimensions in p0:" << p0.howManyN() << endl;
    cout << "get 1st dimension value:" << p0.getValueN(0) << endl;
    p0.setValueN(0,5);
    cout << "set 1st dimesion value to 5:" << p0.getValueN(0) << endl;
    cout << endl;

    cout << "Coordinates:" << endl;
    cout << "p1: " << p1.getValueN(0) << "," << p1.getValueN(1) << "," << p1.getValueN(2) << endl;
    cout << "p2: " << p2.getValueN(0) << "," << p2.getValueN(1) << "," << p2.getValueN(2) << endl;
    cout << "p3: " << p3.getValueN(0) << "," << p3.getValueN(1) << "," << p3.getValueN(2) << endl;
    cout << "Distances:"<< endl;
    cout << "Distance p1 to p2: " << p1.Distance(p2) << endl;
    cout << "Distance p1 to p3: " << p1.Distance(p3) << endl;
    cout << "Distance p2 to p3: " << p2.Distance(p3) << endl;
    cout << endl;

    cout << "Translate p3 by 5:" << endl;
    p3.Translate(5);

    cout << "Coordinates:" << endl;
    cout << "p1: " << p1.getValueN(0) << "," << p1.getValueN(1) << "," << p1.getValueN(2) << endl;
    cout << "p2: " << p2.getValueN(0) << "," << p2.getValueN(1) << "," << p2.getValueN(2) << endl;
    cout << "p3: " << p3.getValueN(0) << "," << p3.getValueN(1) << "," << p3.getValueN(2) << endl;
    cout << "Distances:"<< endl;
    cout << "Distance p1 to p2: " << p1.Distance(p2) << endl;
    cout << "Distance p1 to p3: " << p1.Distance(p3) << endl;
    cout << "Distance p2 to p3: " << p2.Distance(p3) << endl;

return 0;
}
