#include<iostream>
#include"Class_Sample.h"

#define MAX_HEALTH  100
#define EXP          12



int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");   
    }

    {
        Player frank;
        frank.set_name("Frank");
        
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villian", MAX_HEALTH, EXP);
        villain.set_name("Villain");
    }

    Player *enemy = nullptr;
    enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;
    
    return 0;
}
/**
 * Constructors: Hàm tạo thường được sử dụng để khởi tạo
 * Special member method
 * Invoked during object creation
 * Useful for initialzation
 * Same name as the class
 * No return type is specified
 * Can be overloaded
*/
/**
 * Destructors (Hàm hủy)
 * Special member method
 * Same name as the class proceeded with a tilde (~)
 * Invoked automatically when an object is destroyed
 * No return type and no parameters
 * Only 1 destructor is allowed per class - canot be overloaded!
 * Useful to release memory and other resources
 * Just declare a destructor at the end of the class
 * Destructors will be call by compiler when see '}'.
*/