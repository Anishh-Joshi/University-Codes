#include <iostream>

using namespace std;

class Shape {
    protected:
      int width;
      int height;

   public:
      virtual int Area() = 0; 

      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
};

class Rectangle: public Shape {
   public:
      int Area() { 
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      int Area() { 
         return (width * height)/2; 
      }
};

int main() {
  Rectangle R;
  Triangle T;

  R.setWidth(5);
  R.setHeight(10);

  T.setWidth(20);
  T.setHeight(8);

  cout << "The area of the rectangle is: " << R.Area() << endl;
  cout << "The area of the triangle is: " << T.Area() << endl;
}