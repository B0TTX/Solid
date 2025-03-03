#include<iostream>
using namespace std;

class BreadBaked {
    public:
        void bakeBread(){
            cout << "Making fresh bread" << "\n";
        }
};

class InventoryManager{
    public:
        void manageInventory(){
            cout << "Managing Inventory" << "\n";
        }
};

class SupplyOrder{
    public:
        void orderSuppy(){
            cout << "Supplying order" << "\n";
        }
};

class CustomerService{
    public:
        void serviceCustomer(){
            cout << "Customer service" << "\n";
        }
};

class BakeryCleaner{
    public:
        void cleanBakery(){
            cout << "Cleaning Bakery" << "\n";
        }
};

int main(){
    BreadBaked bake;
    InventoryManager inv;
    SupplyOrder supply;
    CustomerService customer;
    BakeryCleaner clean;

    bake.bakeBread();
    inv.manageInventory();
    supply.orderSuppy();
    customer.serviceCustomer();
    clean.cleanBakery();
    return 0;
}