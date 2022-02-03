#include <iostream>
using namespace std;

int main(){

    // 1.
    int num = 9;

    // 2.
    int *ptr = &num;
    
    cout << ptr << endl; 

    // 3.
    (*ptr)++;

    // 4.
    int &ref = num;

    // 5.
    ref++;

    cout << &num << endl; 

    // 6. both will



    



return 0;
}