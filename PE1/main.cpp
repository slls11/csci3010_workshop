#include <iostream>
#include "Point.h"
using namespace std;

/*
CSCI 3010, PE1
Slav Ivanovich
Instructions:
            1. type "make" into command line
            2. type "./main" into command line
            3. if needed, type "make clean" to clear all .o files
*/

int main(){

    Point p1;
    Point p2(2,3);
    Point p3(5,6);

    cout << endl;
    cout << "Coordinates:" << endl;
    cout << "p1: (" << p1.get_x() << "," << p1.get_y() << ")" << endl;
    cout << "p2: (" << p2.get_x() << "," << p2.get_y() << ")" << endl;
    cout << "p3: (" << p3.get_x() << "," << p3.get_y() << ")" << endl;
    cout << "Distances" << endl;
    cout << "p1-to-p2: " << p1.Distance(p2) << endl;
    cout << "p1-to-p3: " << p1.Distance(p3) << endl;
    cout << "p2-to-p3: " << p2.Distance(p3) << endl;
    cout << endl;

    cout << "Positive Translation for p2 by 10:" << endl;
    p2.Translate(10);
    cout << "Coordinates:" << endl;
    cout << "p2: (" << p2.get_x() << "," << p2.get_y() << ")" << endl;
    cout << "Distances:" << endl;
    cout << "p1-to-p2: " << p1.Distance(p2) << endl;
    cout << "p2-to-p3: " << p2.Distance(p3) << endl;
    cout << endl;

    cout << "Negative Translation for p2 by -20:" << endl;
    p2.Translate(-20);
    cout << "Coordinates:" << endl;
    cout << "p2: (" << p2.get_x() << "," << p2.get_y() << ")" << endl;
    cout << "Distances:" << endl;
    cout << "p1-to-p2: " << p1.Distance(p2) << endl;
    cout << "p2-to-p3: " << p2.Distance(p3) << endl;
    cout << endl;

return 0;
}
