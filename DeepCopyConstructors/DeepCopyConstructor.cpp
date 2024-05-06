/**
 * Deep copy constructor in OOP
*/

#include <iostream>

class Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;

public:
    std::string get_name(void);
    int get_health();
    int get_xp();
    void set_name(std::string p_name);
    
    /* Constructors */
    Player(std::string p_name = "None", int p_health = 100, int p_xp = 0);
    /* Copy Constructors */
    Player(const Player &source);    // Source doesnt really matter. 
    /* Destructor */ 
    ~Player() {std::cout << "Destructor called for: " << name << std::endl;}
};

std::string Player::get_name(void)          {return Player::name;}

int Player::get_health(void)                {return Player::health;}

int Player::get_xp(void)                    {return Player::xp;}

void Player::set_name(std::string p_name)   {name = p_name;}

/* Constructor */
Player::Player(std::string p_name, int p_health, int p_xp)
    : name{p_name}, health{p_health}, xp{p_xp}{}

/* Copy constructor */
Player::Player(const Player &source)
    : name (source.name), health(source.health), xp(source.xp){std::cout << "Copy constructor - made copy of: " << source.name << std::endl;}

void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

/**
 * Shadow class
*/
class Shadow 
{
private:
    /* data */
    int *data;
public:
    void set_data_value(int p_data) {*data = p_data;}
    int get_data_value() {return *data;}

    /* Constructor */
    Shadow (int p_data);
    /* Copy Constructor */
    Shadow (const Shadow &source);
    /* Destructor */
    ~Shadow();
};
/* Constructor */
 Shadow :: Shadow (int p_data)
{
    data = new int; 
    *data = p_data;
}

/* Copy Constructor */
 Shadow :: Shadow (const Shadow &source):data(source.data)
{
    std::cout << "Copy constructor - shadow copy" << std::endl;
}

/* Destructor */
Shadow :: ~Shadow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_Shadow(Shadow p_obj)
{
    std::cout << "Value of pointer:  " << p_obj.get_data_value() << std::endl;
}

/**
 * Deep Class
*/
class Deep
{
private:
    /* data */
    int *data;
public:
    void set_data_value(int p_data) {*data = p_data;}
    int get_data_value() {return *data;}

    /* Constructor */
    Deep(int p_data);
    /* Copy constructor */
    Deep(const Deep &source);
    /* Destructor */
    ~Deep();
};
/* Constructor */
Deep::Deep(int p_data)
{
    data = new int; 
    *data = p_data;
}
/* Copy constructor */
 Deep :: Deep (const Deep &source) : Deep{*source.data}
{
    std::cout << "Copy constructor - Deep copy" << std::endl;
}
/* Destructor */
Deep::~Deep()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_Deep(Deep p_obj)
{
    std::cout << "Value of pointer:  " << p_obj.get_data_value() << std::endl;
}

int main()
{
    Deep obj1 {100};
    display_Deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(500);
    display_Deep(obj2);
}
/**
 * Deep copy là một copy constructor sao chép the data pointed to by the pointer.
 * Chúng ta phải phân bổ dung lượng lưu trữ cho dữ liệu được sao chép sau đó thực hiện sao chép
*/