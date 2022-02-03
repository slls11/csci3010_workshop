#include <iostream>
#include <cmath>
#include "Point.h"
#include <limits>
using namespace std;

/*
Function defintions for PE2
*/

// defualt constructer, (0,0)
Point::Point(int n){
    vector <int> vec1;
    for(int i = 0; i < n; i++){
        vec1.push_back(0);
    }
    cords(vec1);
}

// nth constructer
Point::Point(vector <int> & vec1){
    
    cords(vec1);
}

// gets value of nth dimension
int Point::getValueN(int n){

    int value = n_Cord[n];

return value;
}

// sets value of nth dimension to newValue
void Point::setValueN(int n, int newValue){
    n_Cord[n] = newValue;
}

// returns number of dimensions
int Point::howManyN(){
return n_Cord.size();
}

// find distance use for 1,2,3 dimensions points that are the same, otherwise returns 0 (0 is flag in this case)
float Point::Distance(Point &point2){
    
    if (n_Cord.size() > 3){
        cout << "Invalid number of Dimensions" << endl;
    return 0;
    }

    else if ( (n_Cord.size() == 1) && (point2.howManyN() == 1) ){

        float dist_x = (point2.getValueN(0) - n_Cord[0]) * (point2.getValueN(0) - n_Cord[0]);
        
    return dist_x;
    }

    else if ( (n_Cord.size() == 2) && (point2.howManyN() == 2) ){

        float dist_x = (point2.getValueN(0) - n_Cord[0]) * (point2.getValueN(0) - n_Cord[0]);
        float dist_y = (point2.getValueN(1) - n_Cord[1]) * (point2.getValueN(1) - n_Cord[1]);
        float dist_c = sqrt(dist_x + dist_y);

    return dist_c;
    }

    else if ((n_Cord.size() == 3) && (point2.howManyN() == 3)){

        float dist_x = (point2.getValueN(0)-getValueN(0)) * (point2.getValueN(0)-getValueN(0));
        float dist_y = (point2.getValueN(1)-getValueN(1)) * (point2.getValueN(1)-getValueN(1));
        float dist_z = (point2.getValueN(2)-getValueN(2)) * (point2.getValueN(2)-getValueN(2));
        float sumTotal = dist_x + dist_y + dist_z;

    return sqrt(sumTotal);
    }

    else{
        cout << "Points do not have the same dimensions" << endl;
    return 0;
    }

    
}

// translates point by n
void Point::Translate(int n){

    for (int i = 0; i < n_Cord.size(); i++){
        n_Cord[i] = n_Cord[i] + n;
    }

}


