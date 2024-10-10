#include <iostream>
#include <string>
#include "include/Deep.hpp"

void display_deep(Deep d)
{
    // d is a copy of obj1 via copy constructor
    std::cout << d.get_data_value() << std::endl;
} // d goes out of scope here, destructor called

int main ()
{

    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1}; 
    obj2.set_data_value(1000);

    return 0;
    
} // Destructors called in reverse order to constructors
  // Destructors will try to delete
