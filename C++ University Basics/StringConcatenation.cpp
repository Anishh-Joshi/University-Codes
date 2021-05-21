#include<iostream>  
#include<string.h>
#include<conio.h>  
using namespace std;  
  
class String  
{  
    char concatenate[50];   
public:  
    void input()   
    {  
        cout<<"Enetr strings To concatenate: ";  
        cin>>concatenate ;
    }  
    void getter()   
    {  
        cout<<"String: "<<concatenate;  
    }  
    String operator+(String s) 
    {  
        String obj;  
        strcat(concatenate,s.concatenate);  
        strcpy(obj.concatenate,concatenate);  
        return obj;  
    }  
};  
int main()  
{  
    String string1,string2,string3;  
    string1.input(),string2.input();  
    string3=string1+string2;  
    string3.getter(); 
    return 0;
}   