#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string Name;
    int employee_id;
public:
    void getEmployeeInfo(){
        cout<<"Name of the Employee"<<endl;
        cin>>Name;
        cout<<"Employee Id "<<endl;
        cin>>employee_id;
    }

    void displayInfo(){
        cout<<"Employee Name- "<<Name<<endl;
        cout<<"Employee ID- "<<employee_id<<endl;
    }
};

class Administrative:public virtual Employee{

};
class Academic:public virtual Employee{

};
class HOD:public Administrative,public Academic{

};

int main(){
    HOD object1;
    object1.getEmployeeInfo();
    object1.displayInfo();

}