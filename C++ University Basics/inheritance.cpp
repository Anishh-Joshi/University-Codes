#include<iostream>
using namespace std;

class car{
    public:
    void dispCar(){
        cout <<"This is a toyota"<<endl;
    }
};

class carType{
    public:
    void cartypeF(){
        cout<<"This is a Fuel type car"<<endl;

    }
};


class toyota:public car, public carType{

    public:
    void carName(){
        cout<<"This is a Toyota car"<<endl;
    }

};

int main(){

    toyota obj;   //Multiple inheritance ko example
    obj.carName();
    obj.dispCar();
    obj.cartypeF();

}


