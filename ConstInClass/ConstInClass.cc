/**
 * File: ConstInClass.cc
 * Content: The file is used to test const in class 
 * Author: LyNC
*/
#include <iostream>

/**
 * Player class (with const)
*/
class Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;

public:
    std::string get_name(void) const;
    int get_health() const;
    int get_xp() const;
    void set_name(std::string p_name);
    
    /* Constructors */
    Player(std::string p_name = "None", int p_health = 100, int p_xp = 0);
    /* Copy Constructors */
    Player(const Player &source);    // Source doesnt really matter. 
    /* Destructor */ 
    ~Player() {std::cout << "Destructor called for: " << name << std::endl;}
};

std::string Player::get_name(void) const         {return Player::name;}

int Player::get_health(void)  const              {return Player::health;}

int Player::get_xp(void)    const                {return Player::xp;}

void Player::set_name(std::string p_name)   {name = p_name;}

/* Constructor */
Player::Player(std::string p_name, int p_health, int p_xp)
    : name{p_name}, health{p_health}, xp{p_xp}{}

/* Copy constructor */
Player::Player(const Player &source)
    : name (source.name), health(source.health), xp(source.xp){std::cout << "Copy constructor - made copy of: " << source.name << std::endl;}

void display_player(const Player &p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}


int main()
{
    Player hero{"Not const"};
    const Player const_hero{"Const_Hero"};

    display_player(hero);
    display_player(const_hero);

    // hero.set_name("Xin chao");       Error
    // const_hero.set_name("Hello");    Error

    std::cout << hero.get_name() << std::endl;
    std::cout << const_hero.get_name() << std::endl;


    return 0;
}
