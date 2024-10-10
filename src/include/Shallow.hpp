#ifndef _SHALLOW_H_
#define _SHALLOW_H_
#include <string>
#include <iostream>

class Shallow
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
    Shallow(int d);

    // Copy Constructor prototype
    Shallow(const Shallow &source);

    // Destructor prototype
    ~ Shallow();

};

#endif // _SHALLOW_H_