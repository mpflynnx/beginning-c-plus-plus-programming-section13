#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

// Declaration for Account Class
class Account
{

private:
    // attributes
    std::string m_name;
    double m_balance;

public:
    
    // methods declared inline, simple methods can be here
    void set_balance(double bal)
    {
        m_balance = bal;
    }

    double get_balance()
    {
        return m_balance;
    }

    /*  Bigger methods will be declared outside class declaration
        inside a <ClassName>.cpp file 
        prototypes only here
    */ 
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
     
};

#endif // _ACCOUNT_H_