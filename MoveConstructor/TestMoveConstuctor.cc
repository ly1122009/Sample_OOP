/**
 * File: TestMoveConstuctor.cc
 * Content: Example about Move Constuctor in OOP by C++ 
 * Author: LyNC
*/
#include <iostream>
#include <stdint.h>

// class Player
// {
// private:
//     /* data */
//     std::string name;
//     uint32_t hp;
//     uint32_t exp;
//     uint32_t *ptr;
// public:
//     auto get_name() const -> std::string;
//     auto get_hp() const -> uint32_t;
//     auto get_exp() const -> uint32_t;
//     auto get_ptr() const -> uint32_t;
//     auto set_ptr(uint32_t p_data) -> void;
//     /* Constructor */
//     Player(std::string p_name);
//     /* Copy constructor */
//     Player(const Player&) = default;
//     /* Move constructor */
//     Player(Player&&) = default;
//     /* Destructor */
//     ~Player() = default;
// };
// auto get_ptr() const -> uint32_t    {return *ptr;}

// auto set_ptr() -> void              {*ptr = p_data;}

// auto Player::get_name() const -> std::string    {return name;}

// auto Player::get_hp() const -> uint32_t     {return hp;}

// auto Player::get_exp() const -> uint32_t    {return exp;}

// Player::Player(std::string p_name): name(p_name){}

//Player::Player(const Player&){std::cout << "Copy constuctor\n";}

//Player::Player(Player&&){std::cout << "Move constuctor\n";}

//Player::~Player(){}

/**
* Class ptr
*/
class Ptr
{
private:
    /* data */
    uint32_t *ptr;
public:
    auto set_ptr_1(uint32_t p_data) -> void;
    auto get_ptr_1() const          -> uint32_t;

    Ptr() = default;
    Ptr(const Ptr&) = default;
    Ptr(Ptr&&) = default;
    ~Ptr() = default;
};

auto Ptr::set_ptr_1(uint32_t p_data) -> void     {*ptr = p_data;}
auto Ptr::get_ptr_1() const          -> uint32_t {return *ptr;}
// Ptr::Ptr(uint32_t *ptr)
// {

// }

// Ptr::Ptr(const Ptr&){}

// Ptr::Ptr(Ptr&&){}

// Ptr::~Ptr()
// {
// }



int main()
{

    Ptr ptr_1;
    ptr_1.set_ptr_1(10);
    Ptr ptr_2;
    ptr_2.set_ptr_1(20);
    Ptr ptr_3;
    ptr_3.set_ptr_1(30);

    std::cout << "ptr_1 : " << ptr_1.get_ptr_1() << std::endl;
    std::cout << "ptr_2 : " << ptr_2.get_ptr_1() << std::endl;
    std::cout << "ptr_3 : " << ptr_3.get_ptr_1() << std::endl;
    return 0;
}
