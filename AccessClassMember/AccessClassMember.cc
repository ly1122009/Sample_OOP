#include<iostream>
#include<vector>
#include<string>

/**
 * Create class 
*/
class Player            // Default: Private
{
public:                 // Cho phép public
    // attributes (thuộc tính)  
    std::string name;
    int health {100};
    int ex {3};

    // Methods (phương thức)
    void talk(std::string p_talk)
    {
        std::cout << name << " says: " << p_talk << std::endl;
    }
    bool is_dead(void);
};

class Account
{
public:
    // Attributes (Thuộc tính)
    std::string name {"Account"};
    float balance {0.0};

    // Methods (Phương thức)
    void deposit_state(float p_bal)
    {
        balance += p_bal;
        std::cout << "In deposit" << std::endl;
    }
    void withdraw_state(float p_bal)
    {
        balance -= p_bal;
        std::cout << "In withdraw" << std::endl;
    }
};

int main()
{
    /**
     * Create objects of Player class and set the atrributes of those
    */
    // Player frank;
    // frank.name = "Frank";
    // frank.health = 100;
    // frank.ex = 13;
    // frank.talk("hello there");
    
    /**
     * If we have a pointer
    */
    // Player *enemy = nullptr;        // Enemy is not a player object 
    // enemy = new Player;             // Enemy is a pointer to a player object
    // enemy->name     = "Enemy";          
    // (*enemy).health = 100;         // You can also do that   
    // (*enemy).ex       = 5;
    // enemy->talk("Let's fighting!");

    /**
     * Update with Account class
    */
    Account frank_account;
    frank_account.name = "Frank Account";
    frank_account.balance = 0.0f;
    frank_account.deposit_state(100.00f);
    frank_account.withdraw_state(40.32f);

    return 0;
}
