#include<iostream>

using namespace std;

class DateAndTime{

    private:
    int year;
    int month;
    int date;



    public:
    DateAndTime(){
        this->year=0;
        this->month=0;
        this->date=0;
    }



    DateAndTime(int year, int month, int date){
        this->year=year;
        this->month=month;
        this->date=date;
    }


    DateAndTime operator -(const DateAndTime &c){
        DateAndTime temp;
        temp.year =this->year-c.year;
        temp.month = this->month-c.month;
        temp.date = this->date-c.date;

        if(temp.date>30){
            int monthsRem = temp.date/30;
            int daysRem = temp.date%(30*monthsRem);
            temp.date=daysRem;
            temp.month= temp.month+monthsRem;
        }

        if(temp.month>12){
            int yearRem = temp.month/12;
            int monthsRem = temp.month%(12*yearRem);
            temp.month=monthsRem;
            temp.year= temp.year+yearRem;
        }
        return temp;
    }

    void showData(){
        cout<<"Date of birth of the user is: ";
        cout<<year<<" yrs "<<month<<" months "<<date<<" days"<<endl;
    }
};

int main(){

    DateAndTime DoB(2000,12,5);
    DateAndTime today(2005,25,36);
    DateAndTime Age = today-DoB;
    Age.showData();
    
}