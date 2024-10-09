#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

// Declaration for PLAYER Class
class Player
{

private:
    // attributes, order declared here is how initialisation will take place
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
    // Player() // default constructor
    // {
    //     m_name = "None"; // m_name already created as "" before here;
    //     m_health = 0; // m_health already created with junk before here;
    //     m_xp = 0; // m_xp already created with junk before here;
    //     std::cout << "No args given constructor called.\n";
    // }

    // PREFERRED
    Player()
        :m_name{"None"}, m_health{0}, m_xp{0} // can be in any order
    {
        std::cout << "No args given constructor called.\n";
    }

    // Player(std::string name) // One arg constructor with initialisation
    // {
    //     m_name = name;
    //     m_health = 0;
    //     m_xp = 0;
    //     std::cout << "String arg given constructor called.\n";
    // }

    // PREFERRED method of initialization to above
    Player(std::string name) // One arg constructor using initialisation list
        : m_name{name}, m_health{0}, m_xp{0}
    {
        std::cout << "One arg given constructor called.\n";
    }

    // Three arg constructor with initialisation
    // Player(std::string name, int health, int xp)
    // {
    //     m_name = name;
    //     m_health = health;
    //     m_xp = xp;
    //     std::cout << "Three args given constructor called.\n";
    // }

    // PREFERRED to above Three arg constructor with initialisation list
    Player(std::string name, int health, int xp)
        : m_name{name}, m_health{health}, m_xp {xp}
    {
        std::cout << "Three args given constructor called.\n";
    }

    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << m_name << std::endl;
    }
    
};   

#endif // _PLAYER_H_