#include <iostream>

using namespace std;

class Function_Overload {
public:
    void add(int number_1,int number_2) {       // Function with 2 parameters
        cout<< number_1+number_2<<endl;
    }
    
    void add(int number_1,int number_2, int number_3) {     // Function with 2 parameters
      cout<< number_1+number_2+number_3<<endl;
    }
};

int main(void) {
    Function_Overload abhaAcharya;
    abhaAcharya.add(50, 15);              // Passing 2 arguements
    abhaAcharya.add(50, 100, 50);        // Passing 2 arguements
    return 0;
}