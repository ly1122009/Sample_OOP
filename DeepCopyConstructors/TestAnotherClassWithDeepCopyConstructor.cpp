/**
 * File: TestAnotherClassWithDeepCopyConstructor.cpp
 * Content: A File define another class have normal var and a pointer to test Deep copy constructor
 * Author: LyNC
*/

#include <iostream>

/**
 * Player class
*/
class Player
{
private:
    /* data */
    std::string name;
    int hp;
    int *exp;
public:
    void set_hp_value(int p_health) {hp = p_health;}
    int get_hp_value() {return hp;}
    void set_exp_value(int p_exp) {*exp = p_exp;}
    int get_exp_value() {return *exp;}
    void set_name_value(std::string p_name) {name = p_name;}
    std::string get_name_value() {return name;}

    /* Construsctor */
    Player(std::string p_name = "None", int p_hp = 100, int p_exp = 0);
    /* Deep Copy Constructor */
    Player(Player &source);
    /* Destructor */
    ~Player(); // just have to use when the class have a or some pointer 
};

/* Construsctor */
Player::Player(std::string p_name, int p_hp, int p_exp) : name{p_name}, hp{p_hp}
{   
    exp = new int;
    *exp = p_exp;
}

/* Deep Copy Constructor */
Player::Player(Player &source) : name(source.name) , hp(source.hp) 
{
    exp = new int;
    *exp = *(source.exp);
}

/* Destructor */
Player::~Player()
{
    std::cout << "Destructor freeing data" << std::endl;
    delete exp;
}

void display_Player(Player p_obj)
{
    std::cout << "Name Player:  " << p_obj.get_name_value() << std::endl;
    std::cout << "Hp Player:  " << p_obj.get_hp_value() << std::endl;
    std::cout << "Exp Player:  " << p_obj.get_exp_value() << std::endl;
}

int main()
{
    Player hero {"Tom", 100, 0};
    Player hero_2;
    Player hero_3 {"Samson", 20};
    Player hero_copy {hero};
    
    

    // Player hero {hero_copy};
    // hero.set_exp_value(45); 
    // display_Player(hero);
    // display_Player(hero_copy);

    return 0;
}

