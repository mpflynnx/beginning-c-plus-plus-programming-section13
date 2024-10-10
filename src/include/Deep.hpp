#ifndef _DEEP_H_
#define _DEEP_H_
#include <string>
#include <iostream>

class Deep
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
    Deep(int d);

    // Copy Constructor prototype
    Deep(const Deep &source);

    // Destructor prototype
    ~ Deep();

};

#endif // _DEEP_H_