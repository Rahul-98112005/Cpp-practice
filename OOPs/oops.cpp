#include <iostream>
using namespace std;

class Bank
{

    string name;
    int balance;
    int account_no;
    
    public:
    Bank(string name, int balance, int account_no)
    {
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
    }

    void withdraw(int amount,int pin) {

        if(pin == 123)
        {
            if(amount > 0 && balance > amount)
        {
            balance -= amount;
            cout << amount << "is withdraw from your account";
        }
        else
        {
            cout << "Invalid amount or your balance is low";
        }
    }
    }
    void Deposite(int amount) {
        if(amount > 0)
        {
            balance += amount;
            cout << amount << "is Deposited from your account";
        }
    }

    void display(int pin)
    {
        if(pin == 123)
        {
            cout << name <<" "<< balance <<" "<< account_no;
        }
    }


};

int main()
{

    Bank p1("Rahul",2000,1);
    p1.display(123);
    p1.withdraw(2001,123);
    p1.withdraw(2001,123);
}