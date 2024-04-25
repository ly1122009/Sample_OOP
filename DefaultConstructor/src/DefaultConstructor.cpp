/**
 * The default constructor : hàm tạo mặc định trong OOP
*/
#include <iostream>

class Account
{
private:
    /* data */
    std::string name;
    float balance;
public:
    bool withdraw(float amount);
    bool deposit(float amount);
    
    // Constructors (Hàm tạo)
    //Account(); // Được tạo ra tự động (The default constructor)
    //Account(std::string p_name, float p_balance); // Không phải là Default constructor (Khi sử dụng constructor này thì hàm tạo bên trên không được C++ tự khởi tạo)
};

class Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;
public:
    /* Constructor */
    Player()
    {
        name = "none";
        health = 100;
        xp = 0;
    }

    void set_name(std::string p_name)
    {
        name = p_name;
    }

    std::string get_name(void)
    {
        return name;
    }

};





int main()
{
    /* Sử dụng the default constructor */
    // Player Hero_1;
    // std::cout << Hero_1.get_name() << std::endl;  // name = nothing
    // Hero_1.set_name("Congly");  
    // std::cout << Hero_1.get_name() << std::endl;  // name = Congly

    /* Sử dụng constructor */
    Player Hero_2;
    std::cout << Hero_2.get_name() << std::endl;
    Hero_2.set_name("Congly");
    std::cout << Hero_2.get_name() << std::endl;

    return 0;
}

/**
 * The default constructor là hàm được tạo đặc biệt không yêu cầu có parameter.
 * Nếu tạo một class mà không có constuctor function nào thì C++ sẽ tự tạo một constructor cho bạn
 * 
*/

