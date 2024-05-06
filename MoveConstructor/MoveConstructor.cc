/**
 * File: MoveConstructor.cc
 * Content: Sample MoveConstructor in OOP
 * Author: LyNC
*/
#include <iostream>
#include <vector>


class Move
{
private:
    /* data */
    int *data;

public:
    auto getData() const -> int;
    /* Constructor */
    Move(int p_data);
    /* Copy constructor */
    Move(const Move &);
    /* Move constructor */
    Move(Move&&);
    /* Destructor */
    ~Move();
};

auto Move::getData() const -> int
{
    return *data;
}

/* Constructor */
Move::Move(int p_data)
{
    data = new int;
    *data = p_data;
    std::cout << "Constructor is calling for: " << *data << std::endl;
}

/* Copy constructor */
Move::Move(const Move &source) : Move {*source.data}
{
    std::cout << "Deep copy constructor - for: " << *data << std::endl;
}

/* Move constructor */
Move::Move(Move&& source) : data{source.data}
{
    std::cout << "Move constructor - for: " << *data << std::endl;
    source.data = nullptr;
}

/* Destructor */
Move::~Move()
{
    if (data != nullptr)
    {
        std::cout << "Destructor freeing data for " << *data << std::endl;
    }
    else
    {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}


int main()
{
    Move obj1{10};
    Move obj2{20};
    Move obj3 = std::move(obj1);    // Move constructor 
    Move obj4{obj2};                // Copy constructor

    
    std::cout << "obj2: " << obj2.getData() << std::endl;
    std::cout << "obj3: " << obj3.getData() << std::endl;
    std::cout << "obj4: " << obj4.getData() << std::endl;

    return 0;
}