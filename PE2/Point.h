#ifndef POINT_H
#define POINT_H
#include <vector>
using namespace std;

/*
Header for PE2
*/

class Point{
    public:
        Point(int n); //deafult, (all 0's) constructer

        Point(vector <int> & vec1); //Point() //regualr constructer

        int getValueN(int n); //get number of dimensions

        void setValueN(int n, int newvValue); //set nth dimension to newValue

        int howManyN(); //return how many dimensions

        float Distance(Point & point2);// return distance for same n dimension points, returns 0 if differnt number of dimensions

        void Translate(int num); // translates point by n
        
    private:
        vector <int> n_Cord; //vector storing Point data

        void cords(vector <int> & vec1){ // fucntion copying user input vector to Point vector
            n_Cord = vec1;
        }
};

#endif