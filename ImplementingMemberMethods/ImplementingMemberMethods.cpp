#include<iostream>
#include<vector>
#include"Account.h"
#include <string>    


/**
 * Create class 
*/



int main()
{
    /**
     * Create objects of Player class and set the atrributes of those
    */
    // Player frank;
    // frank.name = "Frank";            // Compiler error
    // frank.health = 100;              // Compiler error
    // frank.ex = 13;                   // Compiler error
    // frank.talk("hello there");
    
    /**
     * If we have a pointer
    */
    // Player *enemy = nullptr;        // Enemy is not a player object 
    // enemy = new Player;       l      // Compiler error
    // enemy->name     = "Enemy";          
    // (*enemy).health = 100;          // Compiler error   
    // (*enemy).ex       = 5;          // Compiler error
    // enemy->talk("Let's fighting!");

    /**
     * Update with Account class
    */
   Account frank_acount;
   frank_acount.set_balence(1000.00f);
   float a = frank_acount.get_balence();
    std::cout << a << std::endl;

    return 0;
}

/**
 * Very similar with implementing to functions
 * Member mothods have access to member attributes (Don't need to pass them as arguments)
 * Can be implemented inside the class declaration (Implicitly inline) (Nội tuyến ngầm)
 * Can be implemented outside class declaration (Need to use Class_name::method_name)
 * Can separate specification from implementation (.h file for the class declaration) (.cpp file for the class implementation)
*/
