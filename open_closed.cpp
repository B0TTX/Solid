#include<iostream>
using namespace std;

class PaymentProcessor{
    public:
        virtual void paymentprocess(double amount) = 0; 
};

class CreditCardPaymentProcessor : public PaymentProcessor{
    public:
        void paymentprocess(double amount) override {
            cout << "Processing payment using credit card: " << amount <<  "\n";
        }
};

class DebitCardPaymentProcessor : public PaymentProcessor {
    public:
        void paymentprocess(double amount) override {
            cout << "Processing paymeny using debit card: " << amount << "\n";
        }
};

void paymentsprocess(PaymentProcessor *process, double amount){
    process->paymentprocess(amount);
}

int main(){
    CreditCardPaymentProcessor credit;
    DebitCardPaymentProcessor debit;

    paymentsprocess(&credit, 100.00);
    paymentsprocess(&debit, 150.00);
    return 0;
}