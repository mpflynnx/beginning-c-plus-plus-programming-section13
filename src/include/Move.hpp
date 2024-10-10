#ifndef _MOVE_H_
#define _MOVE_H_
#include <string>
#include <iostream>

class Move
{
private:
    int *data; // raw pointer to a single integer, for simplicity

public:
    void set_data_value(int d)
    {
        *data = d;
    }

    int get_data_value()
    {
        return *data;
    }

    // Constructor prototype
    Move(int d);

    // Copy Constructor prototype
    // Move(const Move &source);

    // Move Constructor prototype
    Move(Move &&source) noexcept;
   
    // Destructor prototype
    ~ Move();

};

#endif // _MOVE_H_