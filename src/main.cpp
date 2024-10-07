#include <iostream>
#include <string>

// Accessing Class Members

class Player
{

    // private members by default if placed here
    
public:
    // attributes
    std::string name;
    int health;
    int xp;
    
    
    // methods defined here, but usually just prototypes here
    // if using header files

    void talk(std::string text_to_say)
    {
        std::cout << name << " says " << text_to_say << '\n';
    }
    
    bool is_dead();
  
};

class Account
{

// private members by default if placed here

public:
    // attributes
    std::string name;
    double balance;
    
    // methods
    void deposit(double bal)
    {
        balance += bal;
        std::cout << "deposit method\n";
    }


    void withdraw(double bal)
    {
        balance -= bal;
        std::cout << "withdraw method\n";

    }
  
};

int main ()
{
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player; // creates a pointer to a new object on heap
    (*enemy).name = "enemy"; // dereference pointer to update attributes
    (*enemy).health = 100;
    // (*enemy).xp = 15;
    enemy->xp = 15; // alternative to above using arrow operator

    enemy->talk("You are dead"); // call a method on a object pointer
    
    delete enemy; // delete pointer when finished if used new keyword

    Account frank_account;
    frank_account.name = "Franks account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    return 0;
    
}
