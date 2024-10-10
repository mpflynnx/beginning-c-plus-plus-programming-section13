#include "include/Deep.hpp"

// Constructor implementation
Deep::Deep(int d)
{
    data = new int; // Allocate dynamic storage on heap
    *data = d; // dereference the pointer
}

// Copy Constructor implementation
// Deep copy different from shallow copy constructor
Deep::Deep(const Deep &source)
    :Deep {*source.data} // copies by delegation to constructor
                         // copies data pointed to by pointer (not the pointer)
{
    std::cout << "Copy Constructor - deep copy" << std::endl;
}

// Destructor implementation
Deep::~Deep()
{
    delete data; // release heap storage. Exception here double free detected
    std::cout << "Destructor freeing data" << std::endl;
}