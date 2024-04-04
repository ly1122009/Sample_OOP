#include<iostream>
#include<vector>
#include<string>

/**
 * Create class 
*/
class Player            // Default: Private
{
private:                 // Cho phép public
    // attributes (thuộc tính)  
    std::string name;
    int health {100};
    int ex {3};

public:
    // Methods (phương thức)
    void talk(std::string p_talk)
    {
        std::cout << name << " says: " << p_talk << std::endl;
    }
    bool is_dead(void);
};

class Account
{
private:
    // Attributes (Thuộc tính)
    std::string name {"Account"};
    float balance {0.0};

public:
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
    // frank.name = "Frank";            // Compiler error
    // frank.health = 100;              // Compiler error
    // frank.ex = 13;                   // Compiler error
    // frank.talk("hello there");
    
    /**
     * If we have a pointer
    */
    // Player *enemy = nullptr;        // Enemy is not a player object 
    // enemy = new Player;             // Compiler error
    // enemy->name     = "Enemy";          
    // (*enemy).health = 100;          // Compiler error   
    // (*enemy).ex       = 5;          // Compiler error
    // enemy->talk("Let's fighting!");

    /**
     * Update with Account class
    */
    Account frank_account;
//  frank_account.name = "Frank Account";       // Compiler error
//  frank_account.balance = 0.0f;               // Compiler error
//  std::cout << frank_account.balance << std::endl;    // Compiler error
    frank_account.deposit_state(100.00f);
    frank_account.withdraw_state(40.32f);

    return 0;
}

/**
 * Public: Accessible everywhere
 * Private: Accessible only by members or friends of the class
 * Protected: used with inheritance (Sử dụng với tính kế thừa)
 * Trong một class có thể sử dụng cùng lúc public, private, protected
 * Nếu cố gắng truy cập một thành viên của class private => Lỗi trình biên dịch.
 * => Dễ biết được lỗi ở đâu hơn, vì không thể truy cập vào private class trực tiếp
*/
