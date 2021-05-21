#include <iostream>
using namespace std;
class Beverage {
protected:
    int costWater, costSugar;

public:
    Beverage()
    {
        cout << "Cost of water: ";
        cin >> costWater;
        cout << "Cost of sugar: ";
        cin >> costSugar;
    }
    int virtual computeCost() = 0;
};
class Tea : public Beverage {
    int costTeaLeaves;

public:
    Tea()
    {
        cout << "Cost of Tea-leaves: ";
        cin >> costTeaLeaves;
    }
    int computeCost()
    {
        cout<<"Grand Total for Tea: "<<costSugar + costWater + costTeaLeaves<<endl;
    }
};
class Coffee : public Beverage {
private:
    int costCoffeePowder;

public:
    Coffee()
    {
        cout << "Cost of 1 Table Spoon Coffee powder : ";
        cin >> costCoffeePowder;
    }
    int computeCost()
    {
        cout<<"Grand Total for Coffee: "<<costSugar + costWater + costCoffeePowder<<endl;
    }
};
int main()
{
    Tea teaPerson;
    teaPerson.computeCost();
    Coffee coffeePerson;
    coffeePerson.computeCost();
}
