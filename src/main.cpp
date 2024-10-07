#include <iostream>
#include <string>

class Player
{
    
public:
    // attributes
    std::string name;
    int health;
    int xp;
    
    
    // methods
    void talk(std::string text_to_say)
    {
        std::cout << name << " says " << text_to_say << '\n';
    }
    
    bool is_dead();
  
};

class Account
{
public:
    // attributes
    std::string name;
    double balance;
    
    // methods
    void desposit(double bal)
    {
        balance += bal;
        std::cout << "desposit method\n";
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

    Player *enemy = new Player; // create a pointer to a object
    (*enemy).name = "enemy"; // dereference pointer to update attribute
    (*enemy).health = 100;
    enemy->xp = 15; // alternative to above

    enemy->talk("You are dead"); // call a method on a object pointer
    
    Account frank_account;
    frank_account.name = "Franks account";
    frank_account.balance = 5000.0;

    frank_account.desposit(1000.0);
    frank_account.withdraw(500.0);

    return 0;
    
}
