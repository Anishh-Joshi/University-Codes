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
class project{
    protected:
    string projectTitle;
    int ObMarks;

    public:
    void projectInfo(){
        cout<<"Enter the title of your Project : "<<endl;
        cin>>projectTitle;
        cout<<"Enter Marks Obtained : "<<endl;
        cin>>ObMarks;
        
    }
    
};

class result:public marks,public project{

    protected:
    float Average,Percentage;

    public:

    void calculate(){
        Average=mP+mM+mC;
        Percentage=Average/3;

    }

    void display(){
        cout<<"------------------------ REPORT CARD ----------------------"<<endl;
        cout<<"------------------------ C++ Institute --------------------"<<endl<<endl;

        cout<<"\t Name          :"<<Name<<endl;
        cout<<"\t Roll Number   :"<<roll_Number<<endl;
        cout<<"\t Percentage    :"<<Percentage<<endl;
        cout<<"\t Project Title :"<<projectTitle<<endl;
        cout<<"\t Project Marks :"<<ObMarks<<endl;
    


    }
};


int main(){

    result anish;
    anish.getInfo();
    anish.getMarks();
    anish.calculate();
    anish.projectInfo();
    anish.display();
}
