#include <iostream>
using namespace std;
class Pizza {
protected:
    int price;

public:
    void virtual orderPizza() = 0;
};
class CheesePizza : public Pizza {
public:
    void orderPizza()
    {
        price = 900;
        cout << "You have ordered Cheese Pizza. Price: Rs. " << price << endl;
    }
};
class PepperoniPizza : public Pizza {
public:
    void orderPizza()
    {
        price = 700;
        cout << "You have ordered Pepperoni Pizza. Price: Rs. " << price << endl;
    }
};
class ClamPizza : public Pizza {
public:
    void orderPizza()
    {
        price = 600;
        cout << "You havve ordered Clam Pizza. Price: Rs. " << price << endl;
    }
};

int main()
{
    int userChoice;
    cout << "Welcome to Domino's Pizza. Enter your choice" << endl;
    cout << "1. Cheese Pizza" << endl;
    cout << "2. Pepperoni Pizza" << endl;
    cout << "3. Clam Pizza" << endl;
    cout << "Enter your choice: ";
    cin >> userChoice;
    CheesePizza* p = new CheesePizza;
    PepperoniPizza* p1 = new PepperoniPizza;
    ClamPizza* p2 = new ClamPizza;
    if (userChoice == 1) {
        p->orderPizza();
    }
    if(userChoice == 2) {
        p1->orderPizza();
    }
    if(userChoice == 3){
        p2->orderPizza();
    }
}
