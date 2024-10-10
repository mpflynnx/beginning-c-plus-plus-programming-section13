#include <iostream>
#include <string>
#include <vector>
#include "include/Move.hpp"

int main ()
{

    std::vector<Move> vec;

    vec.push_back(Move{10}); // Temp R-value object
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
    
} // Destructors called in reverse order to constructors
  // Destructors will try to delete
