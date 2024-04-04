#include<iostream>
#include"Class_Sample.h"

/**
 * Player Class
*/
void Player::set_name(std::string p_name)
{
    name = p_name;
    health = 100;
    xp = 0;
    std::cout << name << std::endl; 
}

// Overloaded constructors
Player::Player()
{
    std::cout << "No args constructor called" << std::endl;
}
Player::Player(std::string name)
{
    std::cout << "String args constructor called" << std::endl;
}
Player::Player(std::string name, int health, int xp)
{
    std::cout << "Three args constructor called" << std::endl;
}

// Destructor (Hàm hủy)
Player::~Player()
{
    std::cout << "Destructor called for " << name << std::endl;
}

/**
 * Account Class
*/
void Account::set_balence(float p_bal)
{
    balence = p_bal;
}

float Account::get_balence(void)
{
    return balence;
}


