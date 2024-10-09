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

    /*
    Delegating constructors
    Reduces code duplication, by using a delegation to a 
    multiple args constructor
    */
   
    // Default constructor Player() delegates work to the three args constructor
    Player()
        :Player{"None", 0, 0} // Three arg constructor called here
    {
        std::cout << "No args given constructor called.\n";
    }

    // One arg constructor delegates work to the three args constructor
    Player(std::string name)
        :Player{name, 0, 0} // Three arg constructor called here
    {
        std::cout << "One arg given constructor called.\n";
    }

    // Three arg constructor, this does all the work
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