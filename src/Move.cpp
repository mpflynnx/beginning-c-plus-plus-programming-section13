#include "include/Move.hpp"

// Constructor implementation
Move::Move(int d)
{
    data = new int; // Allocate dynamic storage on heap
    *data = d; // dereference the pointer
    std::cout << "Constructor for: " << d << std::endl;
}

// Copy Constructor implementation for demonstration
// comment out when using Move constructor

// Move::Move(const Move &source)
//     :Move {*source.data} // copies by delegation to constructor
//                          // copies data pointed to by pointer (not the pointer)
// {
//     std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
// }

// Move constructor
Move::Move(Move &&source) noexcept
    :data {source.data}
{
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

// Destructor implementation
Move::~Move()
{
    if (data != nullptr) {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    } else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data; // release heap storage.
}