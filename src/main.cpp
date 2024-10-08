#include <iostream>
#include <string>
#include "include/Account.hpp"


int main ()
{

    // Class Account from Account.hpp
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
