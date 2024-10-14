#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player
{

private:

    // static members belong to class only not objects
    static int num_of_players; // cannot initialise here, compiler error
    
    
    std::string m_name;
    int m_health;
    int m_xp;

public:
    void set_name(std::string name)
    {
        m_name = name;
    }

    std::string get_name() const // const tells compiler method doesn't change object
    {
        // cannot change a member if const keyword used above.
        return m_name;
    }
    // All getters should be const as shown with get_name() const

    int get_health() const
    {
        return m_health;
    }

    int get_xp() const
    {
        return m_xp;
    }

    Player(std::string name = "None", int health = 0, int xp = 0);
    
    // Copy constructors
    // compiler implicitly generates a copy constructor if there is not one.

    Player(const Player &source);
    

    // Explicitly request from the compiler a default copy constructor
    // Player(const Player& player) = default;

    // destructor
    ~Player();

    /*
    class functions or static functions only have access to static 
    members, it does not have access to any object variables
    */
    static int get_num_of_players();
    
};   

#endif // _PLAYER_H_