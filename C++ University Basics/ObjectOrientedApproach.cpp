#include<iostream>
using namespace std;

class Person{
    protected:
    string Name;
    string gender;
    
    int studentRegistrationNumber;

    public:

    void getName(){
        cout<<"\nEnter the Name: ";
        cin>>Name;


    }
    void getGender(){
        cout<<"Male/Female/Other: ";
        cin>>gender;
        
    }
    
};
class Employee:public virtual Person{
    private:
    int employeeId;
    public:
    void getEmployeeId(){
        cout<<"Enter EmployeeID: ";
        cin>>employeeId;
    }
    void display(){
        cout<<endl<<"Employee Information"<<endl;
        cout<<"Name of the Employee: "<<Name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Employee ID: "<<employeeId<<endl;

    }


};

class Student:public virtual Person{
    private:
    int studentRegistrationNumber;
    public:
    void getRegistrationNumber(){
        cout<<"Enter Registration Numberr: ";
        cin>>studentRegistrationNumber;
        
    }
    void display(){
        cout<<endl<<"Student Information"<<endl;
        cout<<"Name of the Employee: "<<Name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Employee ID: "<<studentRegistrationNumber<<endl;

    }

};

int main(){
    Student anish;
    anish.getName();
    anish.getGender();
    anish.getRegistrationNumber();
    anish.display();

    Employee ram;
    ram.getName();
    ram.getGender();
    ram.getEmployeeId();
    ram.display();

}