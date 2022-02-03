class Point{
public:
     // 0 paramter constructor initializes Point at the origin
     //constructor 1

     Point(int,int): x_(0) , y_(0){}
     
     //constructor 2
     Point(int x, int y): x_(x), y_(y){}
   
private: 
     int x_;
     int y_;
};/*
class Library{
public:
      //constructor 3
      Library(const std::string name){
           name_ = name;
           std::vector<Book> tmp;
           shelf_ = tmp;
      }
private:
      std::string name_;
      std::vector<Book> shelf_; //Book is defined elsewhere in the code for us
};

*/

int main(){

    Point p1(int,int);

return 0;
}
