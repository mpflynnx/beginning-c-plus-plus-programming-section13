#include <iostream>
#include <string>
#include "include/Shallow.hpp"

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
} // s goes out of scope here, destructor called

int main ()
{

    Shallow obj1 {100};
    display_shallow(obj1);

    // obj1 contains junk data
    Shallow obj2 {obj1}; // sharing the same memory address !!Avoid this
    obj2.set_data_value(1000); // update one object thru 2 variables

    return 0;
    
} // Destructors called in reverse order to constructors
  // Destructors will try to delete
