#include<iostream>
using namespace std;

class user{
protected:
    string name;
    string password;
public:
    user(string name, string password){
        this->name=name;
        this->password=password;
    }

    virtual void authenticate()=0;

};

class adminUser:public user{
    long long int phonenumber;
public:
    adminUser(string name,string password, long long phonenumber):user(name,password),phonenumber(phonenumber)
    {}

    void authenticate(){
        string Name,Password;
        long long int Phonenumber;
        cout<<"Welcome Admin Enter your Credentials to Login"<<endl;
        cout<<"Please Enter Your username password and phonenumber"<<endl;
        cin>>Name;
        cin>>Password;
        cin>>Phonenumber;
        if(Name==name && password==Password && phonenumber==Phonenumber){
            cout<<"Login Sucessful"<<endl;
        }
        else{
            cout<<"Wrong Credentials"<<endl;
        }

    }

};
class normalUser:public user{
    public:
    normalUser(string name,string password):user(name,password)
    {}

    void authenticate(){
        string Name,Password;
        cout<<"Welcome Normal User panel, Enter your Credentials to Login"<<endl;
        cout<<"Please Enter Your username and Password"<<endl;
        cin>>Name;
        cin>>Password;
        if(Name==name && password==Password){
            cout<<"Login Sucessful"<<endl;
        }
        else{
            cout<<"Wrong Credentials"<<endl;
        }

    }
};

int main(){
    cout<<"Welcome to the application. Who are you?"<<endl;
    cout<<"1.Admim\n2.Normal User"<<endl;
    int role;
    cin>>role;
    user *Role[]={
        new adminUser("Anish","aj",9848422672),
        new normalUser("Anish","Joshi")
        };
    Role[role - 1]->authenticate();
    return 0;
    

}