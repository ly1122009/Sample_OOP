#include<iostream>
#include<vector>
#include<string>

/**
 * Create class 
*/
class Player            // Default: Private
{
    // attributes (thuộc tính)
    std::string name;
    int health {100};
    int ex {3};

    // Methods (phương thức)
    void talk(std::string p_talk);
    bool is_dead(void);
};

class Account
{
    // Attributes (Thuộc tính)
    std::string name {"Account"};
    float balance {0.0};

    // Methods (Phương thức)
    bool deposit_state(float);
    bool withdraw_state(float);
};

int main()
{
    /**
     * Create object of Player class
    */
    // Player frank;
    // Player hero;

    // Player player[] = {frank, hero};

    // std::vector<Player> player_vector = {frank};
    // player_vector.push_back(hero);

    // Player *enemy {nullptr};
    // enemy = new Player;
    // delete enemy;

    /**
     * Create objects of Account class
    */
   Account frank_account;
   Account jim_account;


    return 0;
}
