#include <iostream>
#include <vector>
#include <string>
using namespace std;

class IVegetarianMenu {
    public:
        virtual vector<string> getVegetarianItems() = 0;
};

class INonVegetarialMenu {
    public:
        virtual vector<string> getNonVegetarianItems() = 0;
};

class IDrinkMenu {
    public:
        virtual vector<string> getDrinkItems() = 0;
};

class VegetarianMenu : public IVegetarianMenu {
    public:
    vector<string> getVegetarianItems() override {
        return {"Vegetable curry", "Paneer", "Dal"};
    }
};

class NonVegetarianMenu : public INonVegetarialMenu {
    public:
        vector<string> getNonVegetarianItems() override {
            return {"Chicken curry", "Egg"};
    }
};

class DrinksMenu : public IDrinkMenu {
    public:
        vector<string> getDrinkItems() {
            return {"Soda", "Fanta"};
        }
};

void displayVegetarianItems(IVegetarianMenu *menu){
    cout << "Vegetarian Items: " << "\n";

    for(auto& item : menu->getVegetarianItems()){
        cout << "--" << item << "\n"; 
    }
}

void displayNonVegetarianItems(INonVegetarialMenu* menu){
    cout << "Non-VegetarianItems: " << "\n";

    for(auto& item : menu->getNonVegetarianItems()){
        cout << "--" << item << "\n";
    }
}


int main() {
    VegetarianMenu veg;
    NonVegetarianMenu nonVeg;
    DrinksMenu drinks;

    displayVegetarianItems(&veg);
    displayNonVegetarianItems(&nonVeg);

    return 0;
}
