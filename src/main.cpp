#include <iostream>
#include <string>
#include "include/Account.hpp"


int main ()
{

    Account savings{}; // value initialization preferred, but must have matching default constructor.

    Account current; // default initialization, calls Account() default constructor
    std::cout << current.get_name() << std::endl;
    std::cout << current.get_balance() << std::endl;
    current.set_name("Barclays");
    current.set_balance(999.0);
    std::cout << current.get_name() << std::endl;
    std::cout << current.get_balance() << std::endl;

    return 0;
    
}
