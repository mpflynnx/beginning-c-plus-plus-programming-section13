#include <iostream>
#include <string>

/*
Implementing member methods in one file inline and outside class
*/

class Account
{

private:
    // attributes
    std::string m_name;
    double m_balance;

public:
    
    // methods declared inline
    void set_balance(double bal)
    {
        m_balance = bal;
    }

    double get_balance()
    {
        return m_balance;
    }

    // methods will be declared outside class declaration
    // prototypes only here
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
     
};

/* 
Methods declared outside of class below
Must include the class name and the scope resolution operator ::
i.e ClassName::method_name
Public methods have access to private attributes
*/
void Account::set_name(std::string n)
{
    m_name = n;
}

std::string Account::get_name()
{
    return m_name;
}

bool Account::deposit(double amount)
{
    // if verify amount
    m_balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (m_balance-amount >= 0){
        m_balance -= amount;
        return true;
    } else {
        return false;
    }
}

int main ()
{

    Account frank_account;
    // Must use public method to set m_name
    frank_account.set_name("Frank's Savings Account");
    // Must use public method to set m_balance
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        std::cout << "Deposit Good.\n";
    } else {
        std::cout << "Deposit bad, must be greater than 200.0\n";
    }

    if (frank_account.withdraw(500.0)) {
        std::cout << "Withdrawal amount valid.\n";
    } else {
        std::cout << "Sorry you don't have enough money.\n";
    }

    if (frank_account.withdraw(1500.0)) {
        std::cout << "Withdrawal amount valid.\n";
    } else {
        std::cout << "Sorry you don't have enough money.\n";
    }

    return 0;
    
}
