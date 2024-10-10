#include "include/Shallow.hpp"

// Constructor implementation
Shallow::Shallow(int d)
{
    data = new int; // Allocate dynamic storage on heap
    *data = d; // dereference the pointer
}

// Copy Constructor implementation
// Shallow copy
Shallow::Shallow(const Shallow &source)
    :data(source.data) // copies pointer not int value
{
    std::cout << "Copy Constructor - shallow copy" << std::endl;
}

// Destructor implementation
Shallow::~Shallow()
{
    delete data; // release heap storage. Exception here double free detected
    std::cout << "Destructor freeing data" << std::endl;
}