#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

// Declaration for PLAYER Class
class Player
{

private:
    // attributes
    std::string m_name;
    int m_health;
    int m_xp;

public:
    void set_name(std::string name)
    {
        m_name = name;
    }

    std::string get_name()
    {
        return m_name;
    }

    // Three Overloaded Constructors must all have different signatures
    
    // Only provide a default constructor when it make sense to
    Player() = default; // Use with Player objectName {};
    
    
    // Player() // default constructor with initialisation
    // {
    //     m_name = "None";
    //     m_health = 0; // best practice to initialise all class members
    //     m_xp = 0;
    //     std::cout << "No args given constructor called.\n";
    // }

    Player(std::string name) // One arg constructor with initialisation
    {
        m_name = name;
        m_health = 0;
        m_xp = 0;
        std::cout << "String arg given constructor called.\n";
    }

    // Three arg constructor with initialisation
    Player(std::string name, int health, int xp)
    {
        m_name = name;
        m_health = health;
        m_xp = xp;
        std::cout << "Three args given constructor called.\n";
    }

    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << m_name << std::endl;
    }
    
};   

#endif // _PLAYER_H_