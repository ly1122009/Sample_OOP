/**
 * Constructor Parameter and Default Value in OOP
*/

#include <iostream>


class Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;

public:
    std::string get_infor(void);
    void set_infor(std::string p_name);
    /* Constructors */
    Player(std::string p_name = "None", int p_health = 100, int p_xp = 0);
};

std::string Player::get_infor(void)
{
    return Player::name;
}

void Player::set_infor(std::string p_name)
{
    name = p_name;
}

Player::Player(std::string p_name, int p_health, int p_xp)
    : name{p_name}, health{p_health}, xp{p_xp}{
        std::cout << "Three-arg constructor" << std::endl;
    }

int main()
{
    Player Hero_1;
    Player Hero_2{"Cong Ly 2"};
    Player Hero_3{"Congly 3", 100, 55};

    return 0;
}
