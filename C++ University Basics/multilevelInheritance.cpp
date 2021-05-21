#include<iostream>
#include<string>
using namespace std;

class student{

    protected:

    string Name;
    int roll_Number;
    int mP,mC,mM;

    public:
    void getInfo(){
        cout<<"Enter the Name and Roll Of The Student"<<endl;
        cin>>Name>>roll_Number;
    }
    
};


class marks:public student{
    protected:
    int mP,mC,mM;

    public:
    void getMarks(){
        cout<<"Enter the marks of Physics, Chemistry and Maths"<<endl;
        cin>>mP>>mC>>mM;
    }

};

class result:public marks{

    protected:
    float Average,Percentage;

    public:

    void calculate(){
        Average=mP+mM+mC;
        Percentage=Average/3;

    }

    void display(){
        cout<<"------------------------ REPORT CARD ----------------------"<<endl;
        cout<<"------------------------ C++ Institute --------------------"<<endl;
        cout<<"\t Name : \t"<<Name<<endl;
        cout<<"\t Roll Number : \t"<<roll_Number<<endl;
        cout<<"\t Percentage : \t"<<Percentage<<endl;


    }
};


int main(){

    result anish;
    anish.getInfo();
    anish.getMarks();
    anish.calculate();
    anish.display();
}

