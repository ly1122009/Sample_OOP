/**
 * Filename: File declare account class 
*/

#ifndef _CLASS_SAMPLE_H_
#define _CLASS_SAMPLE_H_
#include<string>

/**
 * Player Class
*/
class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string p_name);

    // Overloaded Constructors (Hàm tạo quá tải)
    Player();                                       // Có thể có 3 hàm hoặc nhiều hơn.
    Player(std::string name);                       // Hàm tạo trùng tên với class
    Player(std::string name, int health, int xp);   // Hàm tạo không chỉ định về kiểu trả về
    
    // Destructor (Hàm hủy)
    ~Player();
};

/**
 * Account Class
*/
class Account
{
private:
    std::string name;
    float balence;

public:
    void set_balence(float p_bal);
    float get_balence(void);

    // Constructors (Hàm tạo)
    Account();
    Account(std::string name, float balance);
    Account(std::string name);
    Account(float balance);

    // Destructor (Hàm hủy)
    ~Account();
};



#endif