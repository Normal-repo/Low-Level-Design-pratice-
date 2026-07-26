#include <iostream>
using namespace std;


// voilates OCP ,Open closed principle

// class Payment {
// public:
//     void pay(string type) {
//         if (type == "CreditCard")
//             cout << "Credit Card Payment";
//         else if (type == "UPI")
//             cout << "UPI Payment";
//     }
// };















class Payment{
    public:
        virtual void pay()=0;
};

class CreditCard: public Payment{

    public:
        void pay(){
            cout<<"Payment done using Credit Card"<<endl;
        }

};

class DebitCard: public Payment{

    public:
        void pay(){
            cout<<"Payment done using Debit Card"<<endl;
        }

};

class Cash: public Payment{

    public:
        void pay(){
            cout<<"Payment done using Cash"<<endl;
        }

};


void checkout(Payment* paymentMethod){
    paymentMethod->pay();
}

int main(){

    Payment* paymentMethod1 = new CreditCard();
    Payment* paymentMethod2 = new DebitCard();
    Payment* paymentMethod3 = new Cash();
    checkout(paymentMethod1);
    checkout(paymentMethod2);
    checkout(paymentMethod3);
}