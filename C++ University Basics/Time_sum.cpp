#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int hr,int m,int s){
        hours=hr;
        minutes=m;
        seconds=s;
    }

    Time sum(Time clock1){
        Time temp;
        temp.seconds = seconds + clock1 .seconds ;
        temp.minutes = minutes + clock1 .minutes + ( temp.seconds / 60 );
        temp.hours = hours + clock1 .hours + ( temp.minutes / 60 );
        temp.minutes %= 60 ;
        temp.seconds %= 60 ;
        temp.hours %= 24 ;
        return temp;
    }

    void getTime(){
        cout<<hours<<"hr:"<<minutes<<"m:"<<seconds<<"s"<<endl;

    }    
};

int main(){
    Time t1(16,59,23),t2(16,2,4),t3;
    t3=t1.sum(t2);
    t3.getTime();

}