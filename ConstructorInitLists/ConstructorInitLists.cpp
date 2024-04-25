/**
 * Delegating Constructors in OOP
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
    Player();
    Player(std::string p_name);
    Player(std::string p_name, int p_health, int p_xp);
};

std::string Player::get_infor(void)
{
    return Player::name;
}

void Player::set_infor(std::string p_name)
{
    name = p_name;
}

Player::Player()
    : name{"None"}, health{0}, xp{0}{}

Player::Player(std::string p_name)
    : name{p_name}, health{0}, xp{0}{}

Player::Player(std::string p_name, int p_health, int p_xp)
    : name{p_name}, health{p_health}, xp{p_xp}{}

int main()
{
    Player Hero_1;
    Player Hero_2{"Cong Ly"};
    Player Hero_3{"Congly", 100, 0};

    return 0;
}
