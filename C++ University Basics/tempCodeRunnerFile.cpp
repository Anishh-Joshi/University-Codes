#include <iostream>
using namespace std;
class shape {
protected:
    int side1;

public:
    shape(int side1)
    {
        this->side1=side1;
    }
    virtual float findArea() = 0;
};
class rectangle : public shape {
    int side2;

public:
    
    rectangle(int length, int breadth): shape(length), side2(breadth){
        
    }
    float findArea()
    {
        return side1 * side2;
    }
};
class circle : public shape {
public:
    
    circle(int diameter): shape(diameter){

    }
    float findArea()
    {
        return (3.14 * side1 * side1) / 4;
    }
};
int main()
{
    int length, breadth;
    cout << "Length of the court is: ";
    cin >> length;
    cout << "Breath of the court is: ";
    cin >> breadth;
    cout<<"Area is "<<(rectangle(length, breadth).findArea()+circle(breadth).findArea()/2);
}
