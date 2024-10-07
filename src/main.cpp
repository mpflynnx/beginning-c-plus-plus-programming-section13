#include <iostream>
#include <string>

// Accessing Class Members

class Player
{

    // private attributes
    std::string m_name {"default name"};
    int m_health;
    int m_xp;
    /* 
    private members by default if placed here, 
    can use private:
    private members prefixed with m_
    private member attributes provide protection
    only updated with public methods  
    */

    
public:
   
    // public methods defined here, but usually just prototypes here
    // if using header files

    void talk(std::string text_to_say) const
    {
        std::cout << m_name << " says " << text_to_say << '\n';
    }
    
    bool is_dead();
  
};

// class Account
// {

// // private members by default if placed here

// public:
//     // attributes
//     std::string name;
//     double balance;
    
//     // methods
//     void deposit(double bal)
//     {
//         balance += bal;
//         std::cout << "deposit method\n";
//     }


//     void withdraw(double bal)
//     {
//         balance -= bal;
//         std::cout << "withdraw method\n";

//     }
  
// };

int main ()
{

    Player frank;
    /* Testing for compiler errors


    frank.m_name = "Frank"; 

    error: ‘std::string Player::m_name’ is private within this context 
    61 |     frank.m_name = "Frank";

    Cannot access private attribute from outside class.
    */

   /*
    Public methods can be accessed.
   */
    frank.talk("Public methods work\n");

    return 0;
    
}
