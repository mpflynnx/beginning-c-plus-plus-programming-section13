#include "include/Account.hpp"
// <string> included in Account.hpp file

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