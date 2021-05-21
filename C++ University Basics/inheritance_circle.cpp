#include<iostream>
using namespace std;

class circle{
protected:
    float radius;
    float area;

public:
    void getRadius(){
        cout<<"Enter the Radius of the circle- "<<endl;
        cin>>radius;
    }

    void Area(){
        area=3.14*radius*radius;
    }
    

    void display(){
        cout<<"Area is = "<<area<<" meter square"<<endl;
    }
};

class cylinder:public circle{
private:
    float height;
public:
    void getHeight(){
        cout<<"Enter the Radius of the Cylinder- "<<endl;
        cin>>radius;
        cout<<"Enter the Height of the Cylinder- "<<endl;
        cin>>height;
    }
    void Area(){
        area=(2*3.14*radius*radius)+2*radius*height;
    }
    

};

int main(){

    circle object1;
    object1.getRadius();
    object1.Area();
    object1.display();
    cylinder object2;
    object2.getHeight();
    object2.Area();
    object2.display();

}