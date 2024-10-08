#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

// Declaration for Account Class
class Account
{

private:
    // attributes
    std::string m_name;
    double m_balance;

public:

    /*
    If no constructor is defined, a default (no args one is 
    created for you.
    If no default (no args) constructor it defined but
    a args constructor is defined. A default constructor is 
    not created for you. So only the arg constructor will
    work without no matching function compilation errors.
    */

   Account() = default; // generates an explicitly defaulted default constructor

    // user-declared constructor
   // default constructor with initialisation
   Account()
   {
    m_name = "empty name field";
    m_balance = 0.0;
   }


    void set_balance(double bal)
    {
        m_balance = bal;
    }

    double get_balance()
    {
        return m_balance;
    }

    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
     
};

#endif // _ACCOUNT_H_